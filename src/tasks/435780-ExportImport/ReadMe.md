# Auto

## Notes
1. Export import.
2. Project files
   1. point.ixx
   2. line.ixx
   3. main.cpp
3. We have two modules, point and line. Line imports point module because line depends on points. Now where ever line is imported does not imply point is also automatically imported. If you want that the point is also imported automatically, then you need to have the following inside of the line module.

```cpp
export import Point;
```

4. For Clang. [Standard C++ Modules documenation](https://clang.llvm.org/docs/StandardCPlusPlusModules.html) and repurposed it to compile the projects in this chapter.
5. Compilation steps on 3 major compilers:
   1. Visual C++ (Windows)
      1. Create a console project and rename the file containing main to main.cpp
      2. Set the standard to C++20
      3. Right click on the solution name in Project Explorer and select add> Module
      4. Add a module file named line.ixx and put in the code
      5. Add a module file named point.ixx and put in the code
      6. Put the code in the main.cpp file
      7. Build and run the project.
      8. If <iostream> can't be processed go to properties> C/C++> General and toggle `Scan Sources for Module Dependencies` to true.
   2. GCC(13.2.0)
      1. g++ -fmodules-ts -x c++-system-header iostream
      2. g++ -fmodules-ts -c -x c++ point.ixx
      3. g++ -fmodules-ts -c -x c++ line.ixx
      4. g++ -fmodules-ts main.cpp point.o line.o -o rooster.exe
   3. Clang(16) - Windows - Winlibs - Use the terminal
      1. clang++ -std=c++20 -x c++-system-header iostream --precompile -o iostream.pcm
      2. clang++ -std=c++20 -x c++-module point.ixx --precompile -o Point.pcm
      3. clang++ -std=c++20 -x c++-module line.ixx -fmodule-file=Point=Point.pcm --precompile -o Line.pcm
      4. clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
      5. clang++ -std=c++20 Point.pcm -c -o Point.o
      6. clang++ -std=c++20 Line.pcm -c -o Line.o
      7. clang++ -std=c++20 main.o Point.o Line.o -o rooster
   4. Clang(18)
      1. clang++ -std=c++20 -stdlib=libc++ -x c++-system-header iostream --precompile -o iostream.pcm
      2. clang++ -std=c++20 -stdlib=libc++ -x c++-module point.ixx --precompile -o Point.pcm
      3. clang++ -std=c++20 -stdlib=libc++ -x c++-module line.ixx -fmodule-file=Point=Point.pcm --precompile -o Line.pcm
      4. clang++ -std=c++20 -stdlib=libc++ -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
      5. clang++ -std=c++20 -stdlib=libc++ Point.pcm -c -o Point.o
      6. clang++ -std=c++20 -stdlib=libc++ Line.pcm -c -o Line.o
      7. clang++ -std=c++20 -stdlib=libc++ main.o Point.o Line.o -o rooster

## References

1. 

