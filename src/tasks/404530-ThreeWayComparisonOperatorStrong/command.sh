
cd ../../..

cd src/tasks/404530-ThreeWayComparisonOperatorStrong

cd src/apps/404530-ThreeWayComparisonOperatorStrong

start .

code .

code . -r

dir

g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp -std=c++20

dir

.\main.exe

# Clean up to start again.
get-childitem -path . -file -recurse -include ('*.exe', '*.pdb', '*.ilk', '*.obj', '*.dll', '*.exp', '*.lib', '*.o') | Remove-Item

dir



