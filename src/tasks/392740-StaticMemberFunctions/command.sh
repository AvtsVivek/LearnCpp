
cd ../../..

cd src/tasks/392740-StaticMemberFunctions

cd src/apps/392740-StaticMemberFunctions

start .

code .

code . -r

g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp

dir

.\main.exe


