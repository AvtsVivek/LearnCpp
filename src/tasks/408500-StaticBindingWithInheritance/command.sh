
cd ../../..

cd src/tasks/408500-StaticBindingWithInheritance

cd src/apps/408500-StaticBindingWithInheritance

start .

code .

code . -r

dir

g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp

dir

.\main.exe


