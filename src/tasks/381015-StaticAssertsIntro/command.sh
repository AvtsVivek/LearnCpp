
cd ../../..

cd src/tasks/381015-StaticAssertsIntro

cd src/apps/381015-StaticAssertsIntro

start .

code .

code . -r


g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp

dir

.\main.exe

