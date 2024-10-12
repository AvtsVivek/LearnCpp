
cd ../../..

cd ../../../..

cd src/tasks/435980-VisibilityReachability/VisReachExOne

cd src/apps/435980-VisibilityReachability/VisReachExOne

start .

code .

code . -r

dir

g++ --version

g++ -std=c++20 -fmodules-ts -x c++-system-header iostream
g++ -std=c++20 -fmodules-ts -c -x c++ math.ixx
g++ -std=c++20 -fmodules-ts main.cpp math.o -o main.exe

dir

.\main.exe


# Clean up.
..\..\..\..\src\DeleteOutputFiles.ps1

# Clang 16

# First get a command prompt and not powershell

dir

cmd
# cpp 20, Worked

clang++ -std=c++20 -x c++-system-header iostream --precompile -o iostream.pcm

# The following two will not work
clang++ -std=c++20 -x c++-system-header cmath --precompile -o cmath.pcm 
clang++ -std=c++20 -fmodule-file=iostream.pcm -fmodule-file=cmath.pcm -x c++-module math.ixx --precompile -o math.pcm

# Resume from here
clang++ -std=c++20 -fmodule-file=iostream.pcm -x c++-module math.ixx --precompile -o math.pcm
clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
clang++ -std=c++20 math.pcm -c -o math.o
clang++ -std=c++20 main.o math.o -o mainclang.exe

.\mainclang.exe

exit
..\..\..\..\src\DeleteOutputFiles.ps1

## Docker

pwd

docker --version
docker-compose --version

# check if docker is running.
docker info

docker ps

docker pull teeks99/clang-ubuntu:18

# Use the following.
docker pull teeks99/clang-ubuntu:17

docker pull teeks99/clang-ubuntu:20

docker image ls -a

ls

# Only 17 works, so use only 17
docker container run --name clangvivek -it -v ${PWD}:/home/vivektest teeks99/clang-ubuntu:17

# DO NOT use this.
docker container run --name clangvivek -it -v ${PWD}:/home/vivektest teeks99/clang-ubuntu

# Dont use the following as wel.
docker container run --name clangvivek -it -v ${PWD}:/home/vivektest teeks99/clang-ubuntu:18

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



clang --version

uname -a

cd /home/vivektest

ls

ls -alh

rm *.o
rm *.pcm

clang++ -std=c++20 -x c++-system-header iostream --precompile -o iostream.pcm

# The following two will not work
clang++ -std=c++20 -x c++-system-header cmath --precompile -o cmath.pcm 
clang++ -std=c++20 -fmodule-file=iostream.pcm -fmodule-file=cmath.pcm -x c++-module math.ixx --precompile -o math.pcm

# Resume from here
clang++ -std=c++20 -fmodule-file=iostream.pcm -x c++-module math.ixx --precompile -o math.pcm
clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
clang++ -std=c++20 math.pcm -c -o math.o
clang++ -std=c++20 main.o math.o -o mainclangdocker.exe

./mainclangdocker.exe


exit # exit the container. 

docker container rm --force clangvivek

docker rm $(docker ps --filter status=exited -q)




