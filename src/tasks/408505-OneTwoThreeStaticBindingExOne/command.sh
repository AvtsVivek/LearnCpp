
cd ../../..

cd src/tasks/408505-OneTwoThreeStaticBindingExOne

cd src/apps/408505-OneTwoThreeStaticBindingExOne

start .

code .

code . -r

dir

g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp

dir

.\main.exe


