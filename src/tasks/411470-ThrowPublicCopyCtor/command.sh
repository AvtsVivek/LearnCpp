
cd ../../..

cd src/tasks/411470-ThrowPublicCopyCtor

cd src/apps/411470-ThrowPublicCopyCtor

start .

code .

code . -r

dir

g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp

dir

.\main.exe

