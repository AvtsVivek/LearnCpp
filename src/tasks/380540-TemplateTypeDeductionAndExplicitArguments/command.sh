
cd ../../..

cd src/tasks/380540-TemplateTypeDeductionAndExplicitArguments

cd src/apps/380540-TemplateTypeDeductionAndExplicitArguments

start .

code .

code . -r

g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp

dir

.\main.exe

# Clean up to start again.
get-childitem -path . -file -recurse -include ('*.exe', '*.pdb', '*.ilk', '*.obj', '*.dll', '*.exp', '*.lib', '*.o') | Remove-Item

dir


