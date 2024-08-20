
cd ../../..

cd src/tasks/392500-StaticMemberVariables

cd src/apps/392500-StaticMemberVariables

start .

code .

code . -r

g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp

dir

.\main.exe


