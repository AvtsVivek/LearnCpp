
cd ../../..

cd src/tasks/356600-ReturningByReference

cd src/apps/356600-ReturningByReference

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




