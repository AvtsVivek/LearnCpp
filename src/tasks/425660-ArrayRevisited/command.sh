
cd ../../..

cd src/tasks/425660-ArrayRevisited

cd src/apps/425660-ArrayRevisited

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

