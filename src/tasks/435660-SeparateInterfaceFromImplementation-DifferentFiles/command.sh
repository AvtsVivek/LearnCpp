
cd ../../..

cd src/tasks/435660-SeparateInterfaceFromImplementation-DifferentFiles

cd src/apps/435660-SeparateInterfaceFromImplementation-DifferentFiles

start .

code .

code . -r

dir

g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp

# Try the following, if the above does not work.
g++ "-static" -o main.exe .\*.cpp -std=c++20

dir

.\main.exe

