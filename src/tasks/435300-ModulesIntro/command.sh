
cd ../../..

cd src/tasks/435300-ModulesIntro

cd src/apps/435300-ModulesIntro

start .

code .

code . -r

dir

g++ --version

# run one after the another, the following commands.

g++ -fmodules-ts -x c++-system-header iostream

dir

g++ -fmodules-ts -c -x c++ math.ixx

dir

g++ -fmodules-ts main.cpp math.o -o main.exe

dir

.\main.exe

# Clean up.
 .\..\..\..\src\DeleteOutputFiles.ps1

dir # Ensure there are only two files, main.cpp and math.ixx

# Now clang. Open a regular command prompt and then run. 
# Powershell would not work. 

cmd

cd src/apps/435300-ModulesIntro

clang++ --version

clang++ -std=c++20 -x c++-system-header iostream --precompile -o iostream.pcm

dir

clang++ -std=c++20 -fmodule-file=iostream.pcm -x c++-module math.ixx --precompile -o my_math_module.pcm

dir

clang++ -std=c++20 main.cpp -fprebuilt-module-path=. -c -o main.o

dir

clang++ -std=c++20 my_math_module.pcm -c -o my_math_module.o

dir

clang++ -std=c++20 main.o my_math_module.o -o main

dir

.\main.exe

exit

# Clean up.
..\..\..\src\DeleteOutputFiles.ps1

dir

## Docker

cd src/apps/435300-ModulesIntro

docker --version
docker-compose --version

# check if docker is running.
docker info

docker ps

docker pull teeks99/clang-ubuntu:18

docker image ls -a

docker container run --name clangvivek -it -v ${PWD}:/home/vivektest teeks99/clang-ubuntu:18

docker container run --name clangvivek -it -v ${PWD}:/home/vivektest teeks99/clang-ubuntu

docker container run --name clangvivek -v ${PWD}:/home/vivektest teeks99/clang-ubuntu:18

docker container ls -a

docker container start clangvivek

docker run -it -p 8091:8091 clangvivek

docker container attach clangvivek

## Ensure you are inside of the container.

uname -a

cd /home/vivektest

ls

clang++ -std=c++20 -stdlib=libc++ -x c++-system-header iostream --precompile -o iostream.pcm

clang++ -std=c++20 -stdlib=libc++ -fmodule-file=iostream.pcm -x c++-module math.ixx --precompile -o my_math_module.pcm

clang++ -std=c++20 -stdlib=libc++ main.cpp -fprebuilt-module-path=. -c -o main.o

clang++ -std=c++20 -stdlib=libc++ my_math_module.pcm -c -o my_math_module.o

clang++ -std=c++20 -stdlib=libc++ main.o my_math_module.o -o main.exe

ls

./main.exe

# Clean up.
..\..\..\src\DeleteOutputFiles.ps1
