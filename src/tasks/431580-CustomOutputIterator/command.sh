
cd ../../..

cd src/tasks/431580-CustomOutputIterator

cd src/apps/431580-CustomOutputIterator

start .

code .

code . -r

dir

g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp

# Try the following, if the above does not work.
g++ "-static" -o main.exe .\*.cpp -std=c++20

# Try the following, if the above does not work.
g++ "-static" -o main.exe .\*.cpp -std=c++23

dir

.\main.exe

