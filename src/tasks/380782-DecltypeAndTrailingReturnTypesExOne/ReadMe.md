# Decl type

## Notes
1. Linking will fail
2. The declaration will be included in the main.cpp file, and the return type will be deduced correctly. So compilation will go through successfully. But when we hit the linking stage, the definition of the template instance won't be anywhere to be found. The template instance will be generated based on the code we have in the main.cpp file after the pre-processing phase. Hence the linker error you'll see if you try to compile the code here.

 


## References

1. https://en.cppreference.com/w/cpp/language/decltype
2. https://learn.microsoft.com/en-us/cpp/cpp/decltype-cpp
3. https://stackoverflow.com/a/18815367/1977871
4. 
