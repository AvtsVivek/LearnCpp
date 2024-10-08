
cd ../../..

cd ../../../..

cd src/tasks/435740-MultiInterfaceFiles/MultiInterfaceEx

cd src/apps/435740-MultiInterfaceFiles/MultiInterfaceEx

start .

code .

code . -r

dir

g++ --version

g++ -fmodules-ts -x c++-system-header iostream
g++ -fmodules-ts -c -x c++ math.ixx
g++ -fmodules-ts -c -x c++ print.ixx
g++ -fmodules-ts -c math_impli.cpp
g++ -fmodules-ts -c print_impli.cpp
g++ -fmodules-ts main.cpp math.o print.o math_impli.o print_impli.o -o main.exe

dir

.\main.exe


# Clean up.
..\..\..\..\src\DeleteOutputFiles.ps1

# Clang 16

# First get a command prompt and not powershell

cmd

# cpp 20, Worked

clang++ -std=c++20 -x c++-system-header iostream --precompile -o iostream.pcm
clang++ -std=c++20 -fmodule-file=iostream.pcm -x c++-module math.ixx --precompile -o math_stuff.pcm
clang++ -std=c++20 -x c++-module print.ixx --precompile -o print.pcm
clang++ -std=c++20 math_impli.cpp -fmodule-file=math_stuff=math_stuff.pcm -fmodule-file=print=print.pcm -fmodule-file=iostream.pcm -c -o math_impli.o
clang++ -std=c++20 -fmodule-file=iostream.pcm print_impli.cpp -fmodule-file=print=print.pcm -c -o print_impli.o
clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
clang++ -std=c++20 math_stuff.pcm -c -o math_stuff.o
clang++ -std=c++20 print.pcm -c -o print.o
clang++ -std=c++20 main.o math_stuff.o print.o math_impli.o print_impli.o -o main.exe

.\main.exe

exit
..\..\..\..\src\DeleteOutputFiles.ps1

cmd

clang++ -std=c++23 -x c++-system-header iostream --precompile -o iostream.pcm
clang++ -std=c++23 -fmodule-file=iostream.pcm -x c++-module math.ixx --precompile -o math_stuff.pcm
clang++ -std=c++23 -x c++-module print.ixx --precompile -o print.pcm
clang++ -std=c++23 math_impli.cpp -fmodule-file=math_stuff=math_stuff.pcm -fmodule-file=print=print.pcm -fmodule-file=iostream.pcm -c -o math_impli.o
clang++ -std=c++23 -fmodule-file=iostream.pcm print_impli.cpp -fmodule-file=print=print.pcm -c -o print_impli.o
clang++ -std=c++23 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
clang++ -std=c++23 math_stuff.pcm -c -o math_stuff.o
clang++ -std=c++23 print.pcm -c -o print.o
clang++ -std=c++23 main.o math_stuff.o print.o math_impli.o print_impli.o -o main.exe

.\main.exe

# Clean up.
exit
..\..\..\..\src\DeleteOutputFiles.ps1

cmd

# Clang(18). The following is not working, may be because, clang 18 is not installed. Not sure.

cmd

exit
# Clean up.
..\..\..\..\src\DeleteOutputFiles.ps1

## Docker

pwd

docker --version
docker-compose --version

# check if docker is running.
docker info

docker ps

docker pull teeks99/clang-ubuntu:18

docker image ls -a

ls

docker container run --name clangvivek -it -v ${PWD}:/home/vivektest teeks99/clang-ubuntu:18

# DO NOT use this.
docker container run --name clangvivek -it -v ${PWD}:/home/vivektest teeks99/clang-ubuntu

docker container run --name clangvivek -v ${PWD}:/home/vivektest teeks99/clang-ubuntu:18

docker container rm --force clangvivek

docker rm $(docker ps --filter status=exited -q)

## Ensure you are inside of the container.

docker container ls -a

docker container start -i clangvivek # working.

docker container start -i $(docker ps -q -l) # Working

docker run -it -p 8091:8091 clangvivek # not working

docker container attach clangvivek # not working.

docker attach $(docker ps -q -l) # not wokring. 

docker exec -it $(docker ps -q -l) # not working.

docker run -it -d $(docker ps -q -l) # not working.

uname -a

cd /home/vivektest

ls

ls -alh

rm *.o
rm *.pcm

clang++ -std=c++20 -x c++-system-header iostream --precompile -o iostream.pcm
clang++ -std=c++20 -fmodule-file=iostream.pcm -x c++-module math.ixx --precompile -o math_stuff.pcm
clang++ -std=c++20 -x c++-module print.ixx --precompile -o print.pcm
clang++ -std=c++20 math_impli.cpp -fmodule-file=math_stuff=math_stuff.pcm -fmodule-file=print=print.pcm -fmodule-file=iostream.pcm -c -o math_impli.o
clang++ -std=c++20 -fmodule-file=iostream.pcm print_impli.cpp -fmodule-file=print=print.pcm -c -o print_impli.o
clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
clang++ -std=c++20 math_stuff.pcm -c -o math_stuff.o
clang++ -std=c++20 print.pcm -c -o print.o
clang++ -std=c++20 main.o math_stuff.o print.o math_impli.o print_impli.o -o main.exe

ls

./main.exe

exit # exit the container. 

docker container rm --force clangvivek

docker rm $(docker ps --filter status=exited -q)

