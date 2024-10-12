# Auto

## Notes
1. Private Module Fragment.
   1. We keep the declaration separate from the implementation in a single file.
   2. It **SHOULD** be inside a single file.
   3. Changes of code in the private fragment dont trigger recompilation of translation units that import the module.
   4. Good for optimized builds.
   5. 
2. The part below `module: private` is the private module fragment. If we happen to need to change the private fragment, these changes would not trigger re compilation, of other module which will use this module math. This is the advantage, so this enhances the compilation speeds.

```cpp
module;
export module math;

namespace math {
	export double add(double a, double b);
}

module: private;

namespace math {
	double add(double a, double b) {
		return a + b;
	}
}
```

3. Project files
   1. math.ixx
   2. main.cpp
4. For Clang. [Standard C++ Modules documenation](https://clang.llvm.org/docs/StandardCPlusPlusModules.html) and repurposed it to compile the projects in this chapter.
5. Compilation steps of this project on 3 major compilers:
   1. Visual C++ (Windows)
      1. NOTE: concepts, vector and algorithm can be imported.
      2. With the latest version of Visual C++.
      3. Create a console project
      4. Set the standard to C++20
      5. Right click on the solution name in Project Explorer and select add> Module
      6. Add a module file named boxcontainer.ixx and put in the code
      7. Put the code in the main.cpp file
      8. Build and run the project.
      9. If <iostream> can't be processed go to properties> C/C++> General and toggle `Scan Sources for Module Dependencies` to true.
   2.  GCC(13.2.0)
       1.  NOTE: concepts, vector and algorithm can be imported.
       2.  With GCC.
           1.  g++ -std=c++20 -fmodules-ts -x c++-system-header iostream
           2.  g++ -std=c++20 -fmodules-ts -c -x c++ math.ixx [ERROR]
           3.  Can't go further. GCC is not ready for this yet.
   3.  Clang(16) - Windows - Winlibs - Use the terminal. Not Powershell
       1.  clang++ -std=c++20 -x c++-system-header iostream --precompile -o iostream.pcm
       2.  clang++ -std=c++20 -x c++-module math.ixx --precompile -o math.pcm
       3.  clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
       4.  clang++ -std=c++20 math.pcm -c -o math.o
       5.  clang++ -std=c++20 main.o math.o -o rooster
   4.  Clang(18)
       1.  clang++ -std=c++20 -stdlib=libc++ -x c++-system-header iostream --precompile -o iostream.pcm
       2.  clang++ -std=c++20 -stdlib=libc++ -x c++-module math.ixx --precompile -o math.pcm
       3.  clang++ -std=c++20 -stdlib=libc++ -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
       4.  clang++ -std=c++20 -stdlib=libc++ math.pcm -c -o math.o
       5.  clang++ -std=c++20 -stdlib=libc++ main.o math.o -o rooster


## References

1. 

