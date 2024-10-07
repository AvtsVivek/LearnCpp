
cd ../../..

cd ../../../..

cd src/tasks/435580-BlockExport/BlockExportVsExOne

cd src/apps/435580-BlockExport/BlockExportVsExOne

start .

code .

code . -r

dir

g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp

# Try the following, if the above does not work.
g++ "-static" -o main.exe .\*.cpp -std=c++20

# Try the following, if the above does not work.
g++ "-static" -o main.exe .\*.cpp -std=c++23

dir

.\main.exe

# Now compiling with gcc

g++ --version

g++ -fmodules-ts -x c++-system-header iostream

g++ -fmodules-ts -c -x c++ math.ixx

g++ -fmodules-ts main.cpp math.o -o main.exe

# The following is attempted with cpp 23, did not work. Also did not work with cpp 20 as well.

g++ -fmodules-ts -x c++-system-header iostream -std=c++23

g++ -fmodules-ts -c -x c++ math.ixx -std=c++23

g++ -fmodules-ts main.cpp math.o -o main.exe -std=c++23


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
clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
clang++ -std=c++20 math_stuff.pcm -c -o math_stuff.o
clang++ -std=c++20 main.o math_stuff.o -o main.exe

.\main.exe


# Clean up.
exit
..\..\..\..\src\DeleteOutputFiles.ps1

cmd

# cpp 23, Worked

clang++ -std=c++23 -x c++-system-header iostream --precompile -o iostream.pcm
clang++ -std=c++23 -fmodule-file=iostream.pcm -x c++-module math.ixx --precompile -o math_stuff.pcm
clang++ -std=c++23 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
clang++ -std=c++23 math_stuff.pcm -c -o math_stuff.o
clang++ -std=c++23 main.o math_stuff.o -o main

.\main.exe

# Clang(18). The following is not working, may be because, clang 18 is not installed. Not sure.

cmd

clang++ -std=c++20 -stdlib=libc++ -x c++-system-header iostream --precompile -o iostream.pcm
clang++ -std=c++20 -stdlib=libc++ -fmodule-file=iostream.pcm -x c++-module math.ixx --precompile -o math_stuff.pcm
clang++ -std=c++20 -stdlib=libc++ -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
clang++ -std=c++20 -stdlib=libc++ math_stuff.pcm -c -o math_stuff.o
clang++ -std=c++20 -stdlib=libc++ main.o math_stuff.o -o main.exe

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

docker container ls -a

docker container start clangvivek

docker run -it -p 8091:8091 clangvivek

docker container attach clangvivek

## Ensure you are inside of the container.

uname -a

cd /home/vivektest

ls

ls -alh

rm *.o
rm *.pcm

clang++ -std=c++20 -x c++-system-header iostream --precompile -o iostream.pcm

clang++ -std=c++20 -fmodule-file=iostream.pcm -x c++-module math.ixx --precompile -o math_stuff.pcm

clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o

clang++ -std=c++20 math_stuff.pcm -c -o math_stuff.o

clang++ -std=c++20 main.o math_stuff.o -o main.exe

ls

./main.exe

exit # exit the container. 

