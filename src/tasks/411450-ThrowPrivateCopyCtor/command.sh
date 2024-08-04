
cd ../../..

cd src/tasks/411450-ThrowPrivateCopyCtor

cd src/apps/411450-ThrowPrivateCopyCtor

start .

code .

code . -r

dir

g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp

dir

.\main.exe

