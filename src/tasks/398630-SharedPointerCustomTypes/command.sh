
cd ../../..

cd src/tasks/398630-SharedPointerCustomTypes

cd src/apps/398630-SharedPointerCustomTypes

start .

code .

code . -r


dir

g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp

dir

.\main.exe

# Clean up to start again.
get-childitem -path . -file -recurse -include ('*.exe', '*.pdb', '*.ilk', '*.obj', '*.dll', '*.exp', '*.lib', '*.o') | Remove-Item

dir

