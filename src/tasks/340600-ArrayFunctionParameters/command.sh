
cd ../../..

cd src/tasks/340600-ArrayFunctionParameters

cd src/apps/340600-ArrayFunctionParameters

start .

code .

code . -r

g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp

# Use the following, if the above would not work. cpp 20 
g++ "-static" -o main.exe .\*.cpp -std=c++20

# Use the following, if the above would not work. cpp 23 
g++ "-static" -o main.exe .\*.cpp -std=c++23

dir

.\main.exe




