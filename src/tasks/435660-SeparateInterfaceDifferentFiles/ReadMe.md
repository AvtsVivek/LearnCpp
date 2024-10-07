# Auto

## Notes
1. Separating the interface from the implementation. The implementation lives in its own file.
2. Project files
   1. math.ixx
   2. math_impl.cpp (Contains the implementation code for the module inferface file)
   3. main.cpp
3. For Clang. [Standard C++ Modules documenation](https://clang.llvm.org/docs/StandardCPlusPlusModules.html) and repurposed it to compile the projects in this chapter.
4. Compilation of this project on 3 major compilers:
   1. Visual C++ (Windows)
      1. Create a console project and rename the file containing main to main.cpp
      2. Set the standard to C++20
      3. Right click on the solution name in Project Explorer and select add> Module
      4. Add a module file named math.ixx and put in the code
      5. Add a new cpp file named math_impl.cpp and put in the code.
      6. Put the code in the main.cpp file
      7. Build and run the project.
      8. If <iostream> can't be processed go to properties> C/C++> General and toggle `Scan Sources for Module Dependencies` to true.
   2. GCC(13.2.0)		
      1. g++ -fmodules-ts -x c++-system-header iostream
      2. g++ -fmodules-ts -c -x c++ math.ixx
      3. g++ -fmodules-ts -c math_impl.cpp
      4. g++ -fmodules-ts main.cpp math.o math_impl.o -o rooster.exe
   3. Clang(16) - Windows - Use command prompt
      1. clang++ -std=c++20 -x c++-system-header iostream --precompile -o iostream.pcm
      2. clang++ -std=c++20 -fmodule-file=iostream.pcm -x c++-module math.ixx --precompile -o math_stuff.pcm
      3. clang++ -std=c++20 math_impl.cpp -fmodule-file=math_stuff=math_stuff.pcm -fmodule-file=iostream.pcm -c -o math_impl.o
      4. clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
      5. clang++ -std=c++20 -fmodule-file=iostream.pcm math_stuff.pcm -c -o math_stuff.o
      6. clang++ -std=c++20 main.o math_stuff.o  math_impl.o -o rooster
   4. Clang(18)
      1. clang++ -std=c++20 -stdlib=libc++ -x c++-system-header iostream --precompile -o iostream.pcm
      2. clang++ -std=c++20 -stdlib=libc++ -fmodule-file=iostream.pcm -x c++-module math.ixx --precompile -o math_stuff.pcm
      3. clang++ -std=c++20 -stdlib=libc++ math_impl.cpp -fmodule-file=math_stuff=math_stuff.pcm -fmodule-file=iostream.pcm -c -o math_impl.o
      4. clang++ -std=c++20 -stdlib=libc++ -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
      5. clang++ -std=c++20 -stdlib=libc++ -fmodule-file=iostream.pcm math_stuff.pcm -c -o math_stuff.o
      6. clang++ -std=c++20 -stdlib=libc++ main.o math_stuff.o  math_impl.o -o rooster
    



## References

1. 

