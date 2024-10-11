
cd ../../..

cd ../../../..

cd src/tasks/435780-ExportImport/ExpImpExOne

cd src/apps/435780-ExportImport/ExpImpExOne

start .

code .

code . -r

dir

g++ --version

g++ -fmodules-ts -x c++-system-header iostream
g++ -fmodules-ts -c -x c++ point.ixx
g++ -fmodules-ts -c -x c++ line.ixx
g++ -fmodules-ts main.cpp point.o line.o -o main.exe

dir

.\main.exe


# Clean up.
..\..\..\..\src\DeleteOutputFiles.ps1

# Clang 16

# First get a command prompt and not powershell

cmd
# cpp 20, Worked

clang++ -std=c++20 -x c++-system-header iostream --precompile -o iostream.pcm
clang++ -std=c++20 -x c++-module point.ixx --precompile -o Point.pcm
clang++ -std=c++20 -x c++-module line.ixx -fmodule-file=Point=Point.pcm --precompile -o Line.pcm
clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
clang++ -std=c++20 Point.pcm -c -o Point.o
clang++ -std=c++20 Line.pcm -c -o Line.o
clang++ -std=c++20 main.o Point.o Line.o -o main.exe

.\main.exe

exit
..\..\..\..\src\DeleteOutputFiles.ps1

cmd

clang++ -std=c++23 -x c++-system-header iostream --precompile -o iostream.pcm
clang++ -std=c++23 -x c++-module point.ixx --precompile -o Point.pcm
clang++ -std=c++23 -x c++-module line.ixx -fmodule-file=Point=Point.pcm --precompile -o Line.pcm
clang++ -std=c++23 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
clang++ -std=c++23 Point.pcm -c -o Point.o
clang++ -std=c++23 Line.pcm -c -o Line.o
clang++ -std=c++23 main.o Point.o Line.o -o main.exe

.\main.exe

# Clean up.
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
clang++ -std=c++20 -x c++-module point.ixx --precompile -o Point.pcm
clang++ -std=c++20 -x c++-module line.ixx -fmodule-file=Point=Point.pcm --precompile -o Line.pcm
clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
clang++ -std=c++20 Point.pcm -c -o Point.o
clang++ -std=c++20 Line.pcm -c -o Line.o
clang++ -std=c++20 main.o Point.o Line.o -o main.exe

ls

./main.exe

exit # exit the container. 

docker container rm --force clangvivek

docker rm $(docker ps --filter status=exited -q)

