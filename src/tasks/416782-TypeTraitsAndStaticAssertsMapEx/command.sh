
cd ../../..

cd src/tasks/416782-TypeTraitsAndStaticAssertsMapEx

cd src/apps/416782-TypeTraitsAndStaticAssertsMapEx

start .

code .

code . -r

dir

g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp

# Use the following, for cpp 20 
g++ "-static" -o main.exe .\*.cpp -std=c++20

dir

.\main.exe

