# Auto

## Notes
1. Separating the interface from the implementation while keeping things in the same file
2. Project files
   1. math.ixx
   2. main.cpp
3. Observe the following, the export block does not have the implimentation, it only has declaration.

```cpp
//Module purview
export{
	double add(double a, double b);
	void greet(const std::string& name);
	void print_name_length(const char* c_str_name);

	class Point {
	public:
		Point() = default;
		Point(double x, double y);
		friend std::ostream& operator << (std::ostream& out, const Point& point) {
			out << "Point [ x : " << point.m_x << ", y : " << point.m_y << "]";
			return out;
		}
	private:
		double m_x;
		double m_y;
	};
}
```
3. The implimentations are down below the declaration in the **same file**. Look for it.

4. For Clang. [Standard C++ Modules documenation](https://clang.llvm.org/docs/StandardCPlusPlusModules.html) and repurposed it to compile the projects in this chapter.

5. Compilation of this project on 3 major compilers:
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
   3. Clang(16) - Windows - Use command prompt
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

