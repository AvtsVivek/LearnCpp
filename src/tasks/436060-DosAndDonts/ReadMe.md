# Auto

## Notes
1. Dos and donts.
   1. You can export the folloiwng.
      1. Variables, functions, classes, function templates, class templates, concepts.
   2. You cannot export entities with internal linkages, like names licing inside anomymous namespaces and those qualified with the static keyword
   3. You can only export things that live at the namespace level. For example, you cannot export the nember variable of a class.
   4. Template code should live in one module file, seperating into different interface files or implementation files will lead to weird errors
2. Project files
   1. math.ixx
   2. main.cpp
3. For Clang. [Standard C++ Modules documenation](https://clang.llvm.org/docs/StandardCPlusPlusModules.html) and repurposed it to compile the projects in this chapter.
4. **I have not tried the following g++ and clang, and docker, in this example. LEFT OUT**
5. Compilation of this project on 3 major compilers:
   1. Visual C++ (Windows)
      1. NOTE: concepts, vector and algorithm can be imported.
      2. With the latest version of Visual C++.
         1. Create a console project
         2. Set the standard to C++20\
         3. Right click on the solution name in Project Explorer and select add> Module
         4. Add a module file named boxcontainer.ixx and put in the code
         5. Put the code in the main.cpp file
         6. Build and run the project.
         7. If <iostream> can't be processed go to properties> C/C++> General and toggle `Scan Sources for Module Dependencies` to true.
   2. GCC(13.2.0)
      1. g++ -fmodules-ts -x c++-system-header iostream
      2. g++ -fmodules-ts -c -x c++ math.ixx
      3. g++ -fmodules-ts main.cpp math.o -o rooster.exe
   3. Clang(16) - Windows - Winlibs - Use the terminal. Not Powershell
      1. clang++ -std=c++20 -x c++-system-header iostream --precompile -o iostream.pcm
      2. clang++ -std=c++20 -x c++-module math.ixx --precompile -o math.pcm
      3. clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
      4. clang++ -std=c++20 math.pcm -c -o math.o
      5. clang++ -std=c++20 main.o math.o -o rooster
   4. Clang(18)
      1. clang++ -std=c++20 -stdlib=libc++ -x c++-system-header iostream --precompile -o iostream.pcm
      2. clang++ -std=c++20 -stdlib=libc++ -x c++-module math.ixx --precompile -o math.pcm
      3. clang++ -std=c++20 -stdlib=libc++ -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
      4. clang++ -std=c++20 -stdlib=libc++ math.pcm -c -o math.o
      5. clang++ -std=c++20 -stdlib=libc++ main.o math.o -o rooster

## References

1. 

