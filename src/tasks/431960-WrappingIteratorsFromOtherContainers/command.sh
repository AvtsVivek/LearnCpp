
cd ../../..

cd src/tasks/431960-WrappingIteratorsFromOtherContainers

cd src/apps/431960-WrappingIteratorsFromOtherContainers

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

