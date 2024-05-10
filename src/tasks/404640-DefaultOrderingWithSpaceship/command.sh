
cd ../../..

cd src/tasks/404640-DefaultOrderingWithSpaceship

cd src/apps/404640-DefaultOrderingWithSpaceship

start .

code .

code . -r

dir

g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp -std=c++20

# clang is not working.
clang++.exe -flto -static -m32 .\*.cpp -g -std=c++20 -o main.exe

dir

.\main.exe

# Clean up to start again.
get-childitem -path . -file -recurse -include ('*.exe', '*.pdb', '*.ilk', '*.obj', '*.dll', '*.exp', '*.lib', '*.o') | Remove-Item

dir



