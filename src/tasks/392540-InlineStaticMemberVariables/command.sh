
cd ../../..

cd src/tasks/392540-InlineStaticMemberVariables

cd src/apps/392540-InlineStaticMemberVariables

start .

code .

code . -r

g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp

dir

.\main.exe


