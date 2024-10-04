
cd ../../..

cd src/tasks/435300-ModulesIntro

cd src/apps/435300-ModulesIntro

start .

code .

code . -r

dir

g++ --version

# run one after the another, the following commands.

g++ -fmodules-ts -x c++-system-header iostream

dir

g++ -fmodules-ts -c -x c++ math.ixx

dir

g++ -fmodules-ts main.cpp math.o -o main.exe

dir

.\main.exe


