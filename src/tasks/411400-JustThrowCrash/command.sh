
cd ../../..

cd src/tasks/411400-JustThrowCrash

cd src/apps/411400-JustThrowCrash

start .

code .

code . -r

dir

g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp

dir

.\main.exe

