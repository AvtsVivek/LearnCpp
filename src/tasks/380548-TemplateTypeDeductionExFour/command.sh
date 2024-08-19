
cd ../../..

cd src/tasks/380548-TemplateTypeDeductionExFour

cd src/apps/380548-TemplateTypeDeductionExFour

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


