
cd ../../..

cd src/tasks/408515-OneTwoThreeStaticBindingExThree

cd src/apps/408515-OneTwoThreeStaticBindingExThree

start .

code .

code . -r

dir

g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp

dir

.\main.exe


