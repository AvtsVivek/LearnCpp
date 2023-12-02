# Create Task from Terminal.

## How to create vs code build tasks from terminal with CLang as compiler.
1. Similar to previeous, but with CLang instead of gcc

## How this example is built
1. Create a file called main.cpp

2. Add the code as is in the file.

3. Generate the task as in the earlier example.

4. You need to add the following two flags to the task generated. See the SO answer in the references.
				"-static",
				"-pthread",
   1. You need "-static" without which, its the generated output exe will not print anything. See the [SO answer](https://stackoverflow.com/a/58789865/1977871). 
   2. And when you have "-static" flag, you get thread related errors, so you need "-pthread". See this [SO answer](https://stackoverflow.com/a/21116684/1977871).

5. Then finally Terminal -> Run Task.
6. Modifying tasks.json. You can modify your tasks.json to build multiple C++ files by using an argument like "${workspaceFolder}/*.cpp" instead of ${file}.This will build all .cpp files in your current folder. You can also modify the output filename by replacing "${fileDirname}\\${fileBasenameNoExtension}.exe" with a hard-coded filename (for example "${workspaceFolder}\\myProgram.exe").



## References
1. https://youtu.be/8jLOx1hD3_o?t=2704
2. https://stackoverflow.com/a/21116684/1977871
3. https://code.visualstudio.com/docs/cpp/config-mingw#_modifying-tasksjson


