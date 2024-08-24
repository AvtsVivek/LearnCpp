
cd ../../..

cd src/tasks/382629-ConvertibleToStdStringExThree

cd src/apps/382629-ConvertibleToStdStringExThree

start .

code .

code . -r


g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp

# Use the following, the above would not work. cpp 20 
g++ "-static" -o main.exe .\*.cpp -std=c++20

dir

.\main.exe

