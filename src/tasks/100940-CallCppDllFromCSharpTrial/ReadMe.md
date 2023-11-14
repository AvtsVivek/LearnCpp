# Demos Renaming of Project steps.

## How the solution is built.
1. Create a blank solution.
2. Create a DLL Project

    ![Create a DLL Project](images/50_50CppDllProject.jpg)

3. Add a header file

    ![Add Header file](images/51_50AddHeaderToCppProject.jpg)

4. Similarly add a cpp file.   
5. Next add a C# console project.
6. We want the output of the Cpp project to be copied to the C# output directory. So do the following.
   1. Right click the SimpleCppDll project and select properties.

    	![Cpp Project Props](images/52_50_CppProjectConfig.jpg)

   2. Now Add the following target to the .net project

```xml
<Target Name="CopyDLLs" AfterTargets="Build">
	<Message Text="Executing CopyDLLs task $(TargetDir)" Importance="High" />
	<ItemGroup>
		<MySourceFiles Include="..\SimpleCppDll\Output\**\*.*"/>
	</ItemGroup>
	<Copy
		SourceFiles="@(MySourceFiles)"
		DestinationFolder="$(OutDir)" />

	<Message Text="Copied build files" Importance="High" />
	
</Target>

```

   3. Finally the build sequence of the solution. Right Click the solution and select properties. 

     	![Solution Props](images/53_50_SolutionConfig1.jpg)

		and then

     	![Solution Props](images/54_50_SolutionConfig2.jpg)

   5. 
1.  

## Reference
1. https://www.youtube.com/watch?v=5LpehkumdzA
