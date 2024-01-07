
cd ../../..

cd src/tasks/396660-FlippingLinkageConstVarWithExtern

cd src/apps/396660-FlippingLinkageConstVarWithExtern

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



