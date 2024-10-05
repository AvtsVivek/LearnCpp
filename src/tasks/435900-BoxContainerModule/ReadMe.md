# Auto

## Notes
1. Your first module with a few more features
2. Project files
   1. math.ixx
   2. main.cpp
3. For Clang. [Standard C++ Modules documenation](https://clang.llvm.org/docs/StandardCPlusPlusModules.html) and repurposed it to compile the projects in this chapter.
4. Compilation steps on 3 major compilers:
   1. Visual C++ (Windows)
      1. NOTE: concepts, vector and algorithm can be imported
      2. with the latest version of Visual C++.
         1. Create a console project
         2. Set the standard to C++20
         3. Right click on the solution name in Project Explorer and select add> Module
         4. Add a module file named boxcontainer.ixx and put in the code
         5. Put the code in the main.cpp file
         6. Build and run the project.
         7. If <iostream> can't be processed go to properties> C/C++> General and toggle `Scan Sources for Module Dependencies` to true.
   2. GCC(13.2.0)
      1. NOTE: concepts, vector and algorithm can be imported.
      2. With GCC.
         1. g++ -std=c++20 -fmodules-ts -x c++-system-header iostream
         2. g++ -std=c++20 -fmodules-ts -c -x c++ boxcontainer.ixx
         3. g++ -std=c++20 -fmodules-ts main.cpp boxcontainer.o -o rooster.exe
   3. Clang(16) - Windows - Winlibs - Use the command prompt
      1. NOTE: Can't import concepts, vector and algorithm because they clash with iostream. 
      2. Please just #include them for clang. Show this problem.
      3. clang++ -std=c++20 -x c++-system-header iostream --precompile -o iostream.pcm
      4. clang++ -std=c++20 -fmodule-file=iostream.pcm -x c++-module boxcontainer.ixx --precompile -o BoxContainer.pcm
      5. clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
      6. clang++ -std=c++20 BoxContainer.pcm -c -o BoxContainer.o
      7. clang++ -std=c++20 main.o BoxContainer.o -o rooster
   4. Clang(18)
      1. NOTE: Can't import concepts, vector and algorithm because they clash with iostream. 
      2. Please just #include them for clang. Show this problem.
      3. clang++ -std=c++20 -stdlib=libc++ -x c++-system-header iostream --precompile -o iostream.pcm
      4. clang++ -std=c++20 -stdlib=libc++ -fmodule-file=iostream.pcm -x c++-module boxcontainer.ixx --precompile -o BoxContainer.pcm
      5. clang++ -std=c++20 -stdlib=libc++ -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
      6. clang++ -std=c++20 -stdlib=libc++ BoxContainer.pcm -c -o BoxContainer.o
      7. clang++ -std=c++20 -stdlib=libc++ main.o BoxContainer.o -o rooster

## References

1. 

