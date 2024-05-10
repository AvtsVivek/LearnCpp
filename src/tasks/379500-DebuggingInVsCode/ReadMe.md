# Auto

## Notes
1. First ensure the .vscode folder is empty, so we start from scratch. Note here below .vscode filder is empty. 

![Empty VsCode Folder](images/49_50_EmptyVsCodeFolder.jpg)

2. Setup Run/Debug configurations in launch.json files. Ensure the following extension. Go to that extension and Click the link as follows. 

![Empty VsCode Folder](images/50_50_CppVsCodeExtension.jpg)

3. You will be taken to the following link.

https://code.visualstudio.com/docs/cpp/config-mingw

4. Then scroll down to the following link

https://code.visualstudio.com/docs/cpp/config-mingw#_debug-helloworldcpp

![Empty VsCode Folder](images/51_50_DebuggingHellowWorld.jpg)

5. Open the file in Vs Code as follows, and then press the play button in the top right corner of the editor.

![Press the play button](images/52_50_RunOrDebug.jpg)

6. Select Gcc as follows.

![Select Gcc](images/53_50_BuildAndDebugActiveFile.jpg)

7. This generates a Task.json file. Add the following to the task args

```json
    "-std=c++20",
	"-static",
```

![Add Static](images/54_50_AddStatic.jpg)

8. Take a look at the following reference

https://code.visualstudio.com/docs/cpp/config-mingw#_understanding-tasksjson

9. Now adding launch.json file. Go to the following reference.

https://code.visualstudio.com/docs/cpp/config-mingw#_customize-debugging-with-launchjson

10. Do the following to add launch.json file

![Adding Launc configuration](images/55_50_CreatingLaunchJsonFile.jpg)

11. This adds a launch config file as follows.

![Launch config file as follows](images/56_50_LaunchConfigFileInplace.jpg)

12. Place the cursor in between the square brackets(look below) and press Ctrl + Spacebar to kick the intellisence. 

```json
{
    // Use IntelliSense to learn about possible attributes.
    // Hover to view descriptions of existing attributes.
    // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
    "version": "0.2.0",
    "configurations": []
}
```

13. Or Or Run -> Add Configuration.

![Run Add Config](images/57_50_RunAddConfig.jpg)

14. You will see the following. Choose Launch config as follows.

![Choose Launch Config](images/58_50_LaunchConfig.jpg) 

15. Then edit it to add the path etc.

16. Take a look at `preLaunchTask` for each configuration in launch.json file. 

![PreLaunchTask in Launch Json](images/59_50_LaunchJsonPreLaunchTask.jpg) 

17. Now take a look in `label` in Task.json

![Label in Tasks](images/60_50_LableInTasks.jpg) 

18. Note both the above should match, the `label` and `preLaunchTask`.   

19. Now to actually debug. Ensure main.cpp is selected and open in the window. Then select the debug tab. 

![Debug Tab](images/61_50_DebugTab.jpg)

20. Press Play button.

![Play button](images/62_50_Start_Debugging.jpg)

21. You can now see the call stack and watch window as follows.

![Call Stack and Watch Window](images/63_50_CallStackWatchWindow.jpg)

## References

1. https://go.microsoft.com/fwlink/?linkid=830387
2. https://code.visualstudio.com/docs/cpp/config-mingw#_understanding-tasksjson
3. https://code.visualstudio.com/docs/cpp/config-mingw#_debug-helloworldcpp
4. https://code.visualstudio.com/docs/cpp/config-mingw#_customize-debugging-with-launchjson

