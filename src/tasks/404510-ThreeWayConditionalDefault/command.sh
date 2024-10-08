
cd ../../..

cd src/tasks/404510-ThreeWayConditionalDefault

cd src/apps/404510-ThreeWayConditionalDefault

start .

code .

code . -r

dir

g++ --version

# -o flag means, compile as well as link. This will not work
g++ "-static" -o main.exe .\*.cpp

# Use the following, the above would not work. cpp 20 
g++ "-static" -o main.exe .\*.cpp -std=c++20

dir

.\main.exe

# Clean up to start again.
get-childitem -path . -file -recurse -include ('*.exe', '*.pdb', '*.ilk', '*.obj', '*.dll', '*.exp', '*.lib', '*.o') | Remove-Item

dir



