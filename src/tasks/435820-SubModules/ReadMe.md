# Auto

## Notes
1. Submodules
2. Project files
   1. point.ixx
   2. line.ixx
   3. main.cpp
3. For Clang. [Standard C++ Modules documenation](https://clang.llvm.org/docs/StandardCPlusPlusModules.html) 
4. Compilation steps on 3 major compilers:
   1. Visual C++ (Windows)
      1. Create a console project and rename the file containing main to main.cpp
      2. Set the standard to C++20
      3. Right click on the solution name in Project Explorer and select add> Module
      4. Add a module file named add_sub.ixx and put in the code
      5. Add a module file named mult_div.ixx and put in the code
      6. Add a module file named math.ixx and put in the code
      7. Put the code in the main.cpp file
      8. Build and run the project.
      9. If <iostream> can't be processed go to properties> C/C++> General and toggle `Scan Sources for Module Dependencies` to true.
   2.  GCC(13.2.0)
       1.  g++ -fmodules-ts -x c++-system-header iostream
       2.  g++ -fmodules-ts -c -x c++ add_sub.ixx
       3.  g++ -fmodules-ts -c -x c++ mult_div.ixx
       4.  g++ -fmodules-ts -c -x c++ math.ixx
       5.  g++ -fmodules-ts main.cpp math.o add_sub.o mult_div.o -o rooster.exe
   3.  Clang(16) - Windows - Winlibs - Use the terminal
       1.  clang++ -std=c++20 -x c++-system-header iostream --precompile -o iostream.pcm
       2.  clang++ -std=c++20 -x c++-module add_sub.ixx --precompile -o math.add_sub.pcm
       3.  clang++ -std=c++20 -x c++-module mult_div.ixx --precompile -o math.mult_div.pcm
       4.  clang++ -std=c++20 -x c++-module math.ixx -fprebuilt-module-path=. --precompile -o math.pcm
       5.  clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
       6.  clang++ -std=c++20 math.add_sub.pcm -c -o math.add_sub.o
       7.  clang++ -std=c++20 math.mult_div.pcm -c -o math.mult_div.o
       8.  clang++ -std=c++20 math.pcm -c -o math.o
       9.  clang++ -std=c++20 main.o math.o math.add_sub.o math.mult_div.o -o rooster
   4.  Clang(18)
       1.  clang++ -std=c++20 -stdlib=libc++ -x c++-system-header iostream --precompile -o iostream.pcm
       2.  clang++ -std=c++20 -stdlib=libc++ -x c++-module add_sub.ixx --precompile -o math.add_sub.pcm
       3.  clang++ -std=c++20 -stdlib=libc++ -x c++-module mult_div.ixx --precompile -o math.mult_div.pcm
       4.  clang++ -std=c++20 -stdlib=libc++ -x c++-module math.ixx -fprebuilt-module-path=. --precompile -o math.pcm
       5.  clang++ -std=c++20 -stdlib=libc++ -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
       6.  clang++ -std=c++20 -stdlib=libc++ math.add_sub.pcm -c -o math.add_sub.o
       7.  clang++ -std=c++20 -stdlib=libc++ math.mult_div.pcm -c -o math.mult_div.o
       8.  clang++ -std=c++20 -stdlib=libc++ math.pcm -c -o math.o
       9.  clang++ -std=c++20 -stdlib=libc++ main.o math.o math.add_sub.o math.mult_div.o -o rooster

## References

1. 

