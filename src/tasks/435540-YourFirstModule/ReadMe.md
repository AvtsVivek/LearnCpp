# Auto

## Notes

1. Module with a few more features
2. Project files
   1. math.ixx
   2. main.cpp

3. If the module declaration has export in front of it, the file containing the module becomes a module interface file.
4. In the math.ixx file, look for the following.

```cpp
export module math_stuff; // Module declaration
```

5. The collection of entities exported from a module file make up the module interface. If you look at the module interface, it comprises of three functions, `add`, `greet` and `print_name_length`. Thats because, there is an `export` keyword prefixed. 

```cpp
//Module purview
export double add(double a, double b) {
	return a + b;
}

export void greet(const std::string& name) {
	std::string dest;
	dest = "Hello ";
	dest.append(name);
	std::cout << dest << std::endl;
}

export void print_name_length(const char* c_str_name) {
	std::cout << "Length : " << std::strlen(c_str_name) << std::endl;
}
```

6. This is what make this file a module interace file or unit. This is a declaration of a new module. 

7. There are three aspects to working with modules.
   1. Include translation. Find the following in the module file(math.ixx). This is what we do in the global module fragment. 
```cpp
#include <cstring> // C function includes must show up here
#include <string>
```
   2. Header imporation
```cpp
//Module preamble
import <iostream>;
```
   3. Module importation. Now in the main.cpp file, look for `import math_stuff;`. This is module importation.
8. As done in earlier example, create a VS project, add the module and change the main file as well.
9. One has to do the research to get the exact steps to follow to build with a specific IDE or compiler.
10. For Clang, see the [documentation](https://clang.llvm.org/docs/StandardCPlusPlusModules.html) and repurposed it to compile the projects in this chapter.
11.  The instructions for each compiler are shared below.
12.  Compilation of this project on 3 major compilers:
   1. Visual C++ (Windows)
      1. Create a console project
      2. Set the standard to C++20
      3. Right click on the solution name in Project Explorer and select add> Module
      4. Add a module file named math.ixx and put in the code
      5. Put the code in the main.cpp file
      6. Build and run the project.
      7. If <iostream> can't be processed go to properties> C/C++> General and toggle `Scan Sources for Module Dependencies` to true.
   2. GCC(13.2.0)
      1. g++ -fmodules-ts -x c++-system-header iostream
      2. g++ -fmodules-ts -c -x c++ math.ixx
      3. g++ -fmodules-ts main.cpp math.o -o rooster.exe
   3. Clang(16) Windows Winlibs - Use command prompt
      1. clang++ -std=c++20 -x c++-system-header iostream --precompile -o iostream.pcm
      2. clang++ -std=c++20 -fmodule-file=iostream.pcm -x c++-module math.ixx --precompile -o math_stuff.pcm
      3. clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
      4. clang++ -std=c++20 math_stuff.pcm -c -o math_stuff.o
      5. clang++ -std=c++20 main.o math_stuff.o -o rooster
   4. Clang(18)
      1. clang++ -std=c++20 -stdlib=libc++ -x c++-system-header iostream --precompile -o iostream.pcm
      2. clang++ -std=c++20 -stdlib=libc++ -fmodule-file=iostream.pcm -x c++-module math.ixx --precompile -o math_stuff.pcm
      3. clang++ -std=c++20 -stdlib=libc++ -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
      4. clang++ -std=c++20 -stdlib=libc++ math_stuff.pcm -c -o math_stuff.o
      5. clang++ -std=c++20 -stdlib=libc++ main.o math_stuff.o -o rooster

## References

1. 

