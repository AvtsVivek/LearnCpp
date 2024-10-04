# Auto

## Notes
1. Fire up visual studio 

![Visual Studio Create new project](50_50_VisualStudio_CreateNewProject.jpg)

2. Select C++ Console Project and click Next(find it at bottom right).

![Cpp Console Project](51_50_CppConsoleApp.jpg)

3. First console app. Name the project, select location and click Create(find it at bottom right)

![First console app](52_50_CppFirstConsoleApp.jpg)

4. Console App in Visual Studio. Optionally you can rename the cpp file to main.cpp.

![Console App in Vs](53_50_ConsoleAppInVs.jpg)

5. Change #include to import. Change the properties 

![Project Properties](54_50_ProjectProps.jpg)

6. Choose cpp 20 as follows.

![Choose cpp 20](55_50_CppTwnetyLangageSelection.jpg)

7. Also choose the following option

![ScanSourceModule](56_50_ScanSourcesFromModules.jpg)

7. Build, run and debug.

8. Now Adding module. 

9. Ctrl + Shift + A or right click on the project, Add -> New Item.

![New Module](57_50_NewModule.jpg)

10. Change the contents of the module file to the following.

```cpp
module;
//Global module fragment : #include , preprocessor directives
export module my_math_module;
//Module preamble: imports
import <iostream>;

//Module purview
export void say_something() {
	std::cout << "Saying something..." << std::endl;
}
```




## References

1. 

