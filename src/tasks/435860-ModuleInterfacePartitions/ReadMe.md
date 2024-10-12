# Auto

## Notes
1. This shows another way to split the module into parts. The earlier sub modules leak into user space, the users can peek into the modules and see how the code is split into different parts.
2. If we want to hide your implimentatioin details, you can use the partition feature, that we have in cpp 20 modules
3. So we have math, math:addition, math:multiplication. The latter both will be imported by our math module. But the way our project is broken up, is ***not*** going to be visible to the users of our module.
4. Project files
   1. add_partition.ixx
   2. math.ixx
   3. multi_partition.ixx
   4. main.cpp
5. For Clang. [Standard C++ Modules documenation](https://clang.llvm.org/docs/StandardCPlusPlusModules.html) and repurposed it to compile the projects in this chapter.
6. Compilation steps on 3 major compilers:
   1. Visual C++ (Windows)
      1. Create a console project and rename the file containing main to main.cpp
      2. Set the standard to C++20
      3. Right click on the solution name in Project Explorer and select add> Module
      4. Add a module file named add_partition.ixx and put in the code
      5. Add a module file named mult_partition.ixx and put in the code
      6. Add a module file named math.ixx and put in the code
      7. Put the code in the main.cpp file
      8. Build and run the project.
      9. If <iostream> can't be processed go to properties> C/C++> General and toggle `Scan Sources for Module Dependencies` to true.
   2.  GCC(13.2.0)
       1.  g++ -fmodules-ts -x c++-system-header iostream
       2.  g++ -fmodules-ts -c -x c++ add_partition.ixx
       3.  g++ -fmodules-ts -c -x c++ mult_partition.ixx
       4.  g++ -fmodules-ts -c -x c++ math.ixx
       5.  g++ -fmodules-ts main.cpp math.o add_partition.o mult_partition.o -o rooster.exe
   3.  Clang(16) - Windows - Winlibs - Use the terminal
       1.  clang++ -std=c++20 -x c++-system-header iostream --precompile -o iostream.pcm
       2.  clang++ -std=c++20 -x c++-module add_partition.ixx --precompile -o math-addition.pcm
       3.  clang++ -std=c++20 -x c++-module mult_partition.ixx --precompile -o math-multiplication.pcm
       4.  clang++ -std=c++20 -x c++-module math.ixx -fprebuilt-module-path=. --precompile -o math.pcm
       5.  clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp  -fprebuilt-module-path=. -c -o main.o
       6.  clang++ -std=c++20 math-addition.pcm -c -o math-addition.o
       7.  clang++ -std=c++20 math-multiplication.pcm -c -o math-multiplication.o
       8.  clang++ -std=c++20 math.pcm -c -o math.o
       9.  clang++ -std=c++20 main.o math.o math-addition.o math-multiplication.o -o rooster
   4.  Clang(18) 
       1.  clang++ -std=c++20 -stdlib=libc++ -x c++-system-header iostream --precompile -o iostream.pcm
       2.  clang++ -std=c++20 -stdlib=libc++ -x c++-module add_partition.ixx --precompile -o math-addition.pcm
       3.  clang++ -std=c++20 -stdlib=libc++ -x c++-module mult_partition.ixx --precompile -o math-multiplication.pcm
       4.  clang++ -std=c++20 -stdlib=libc++ -x c++-module math.ixx -fprebuilt-module-path=. --precompile -o math.pcm
       5.  clang++ -std=c++20 -stdlib=libc++ -fmodule-file=iostream.pcm main.cpp  -fprebuilt-module-path=. -c -o main.o
       6.  clang++ -std=c++20 -stdlib=libc++ math-addition.pcm -c -o math-addition.o
       7.  clang++ -std=c++20 -stdlib=libc++ math-multiplication.pcm -c -o math-multiplication.o
       8.  clang++ -std=c++20 -stdlib=libc++ math.pcm -c -o math.o
       9.  clang++ -std=c++20 -stdlib=libc++ main.o math.o math-addition.o math-multiplication.o -o rooster


## References

1. 

