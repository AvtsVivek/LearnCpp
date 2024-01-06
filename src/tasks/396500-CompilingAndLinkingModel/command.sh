
cd ../../..

cd src/tasks/396500-CompilingAndLinkingModel

cd src/apps/396500-CompilingAndLinkingModel

dir

start .

code .

code . -r

g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp

dir

.\main.exe

# Clean up to start again.
get-childitem -path . -file -recurse -include ('*.exe', '*.pdb', '*.ilk', '*.obj', '*.dll', '*.exp', '*.lib', '*.o') | Remove-Item

dir

# -c flag means, just compile. No linking.
g++ -c .\*.cpp

# compilation is done. Object files are generated. But not the exe. Its just compilation and not linking.

dir

# Now, linking.

# Just removed any exe file, if any, before proceeding ahead.
get-childitem -path . -file -recurse -include ('*.exe') | Remove-Item

dir

# Now the linking. Any one of the following two
# Note, we need the -static flage here.
g++ "-static" -o main.exe .\main.o .\utilities.o
g++ "-static" -o main.exe .\*.o

dir

.\main.exe

# Clean up the stuff
get-childitem -path . -file -recurse -include ('*.exe', '*.pdb', '*.ilk', '*.obj', '*.dll', '*.exp', '*.lib', '*.o') | Remove-Item

dir

