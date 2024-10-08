# Auto

## Notes
1. Exploring block export with c++20 modules. Introduces explort blocks. So instead of the following, 
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
```   

```cpp
//Module purview
export{

	double add(double a, double b) {
		return a + b;
	}

	void greet(const std::string& name) {
		std::string dest;
		dest = "Hello ";
		dest.append(name);
		std::cout << dest << std::endl;
	}
}
```

2. asdf
3. Project files
   1. math.ixx
   2. main.cpp
4. Clang: [C++ Modules documenation](https://clang.llvm.org/docs/StandardCPlusPlusModules.html) and repurposed it to compile the projects in this chapter.
5. The instructions for each compiler are shared below.	
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

