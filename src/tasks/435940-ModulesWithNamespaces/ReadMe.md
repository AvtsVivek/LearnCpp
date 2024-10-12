# Auto

## Notes
1. Exporting stuff with namespace.
2. The following shows two scenarios, first, exporting everything within the namespace. Both `Point` and `Line`.
3. And the second one, just one function - `distance`. This is because, we are not exporting the namespace, but one functioin inside of it, explicitly.

```cpp
export namespace math {
   // Exporting everything within this.
	class Point
	{ /* .... */ };

	class Line
	{ /* .... */ };
}

namespace math {
	// exporting a function inside a namespce, not everything.
	export double distance(const Point& p1, const Point& p2)
	{
		return sqrt(pow(p1.getX() - p2.getX(), 2) + pow(p1.getY() - p2.getY(), 2));
	}

	// We are not exporting the following
	Point add(const Point& p1, const Point& p2)
	{
		return Point(p1.getX() + p2.getX(), p1.getY() + p2.getY());
	}
}
```   
3. Project files
   1. math.ixx
   2. main.cpp
4. For Clang. [Standard C++ Modules documenation](https://clang.llvm.org/docs/StandardCPlusPlusModules.html) and repurposed it to compile the projects in this chapter.
5. Compilation steps on 3 major compilers:
   1. Visual C++ (Windows)
      1. NOTE: concepts, vector and algorithm can be imported. 
      2. With the latest version of Visual C++.
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
         2. g++ -std=c++20 -fmodules-ts -x c++-system-header cmath
         3. g++ -std=c++20 -fmodules-ts -c -x c++ math.ixx
         4. g++ -std=c++20 -fmodules-ts main.cpp math.o -o rooster.exe
   3. Clang(16) - Windows - Winlibs - Use command prompt. Not powershell
      1. NOTE: This throws a bunch of warnings about header units but it works.
      2. clang++ -std=c++20 -x c++-system-header iostream --precompile -o iostream.pcm
      3. clang++ -std=c++20 -x c++-system-header cmath --precompile -o cmath.pcm [ERROR - Clang 16]
      4. clang++ -std=c++20 -fmodule-file=iostream.pcm -fmodule-file=cmath.pcm -x c++-module math.ixx --precompile -o math.pcm
      5. clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
      6. clang++ -std=c++20 math.pcm -c -o math.o
      7. clang++ -std=c++20 main.o math.o -o rooster
   4. Clang(18)
      1. NOTE: This throws a bunch of warnings about header units but it works.
      2. clang++ -std=c++20 -stdlib=libc++ -x c++-system-header iostream --precompile -o iostream.pcm
      3. clang++ -std=c++20 -stdlib=libc++ -x c++-system-header cmath --precompile -o cmath.pcm
      4. clang++ -std=c++20 -stdlib=libc++ -fmodule-file=iostream.pcm -fmodule-file=cmath.pcm -x c++-module math.ixx --precompile -o math.pcm
      5. clang++ -std=c++20 -stdlib=libc++ -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
      6. clang++ -std=c++20 -stdlib=libc++ math.pcm -c -o math.o
      7. clang++ -std=c++20 -stdlib=libc++ main.o math.o -o rooster

## References

1. 

