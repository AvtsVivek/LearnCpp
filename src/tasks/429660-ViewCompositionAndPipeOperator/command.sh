
cd ../../..

cd src/tasks/429660-ViewCompositionAndPipeOperator

cd src/apps/429660-ViewCompositionAndPipeOperator

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

