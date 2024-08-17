# Configure Cpp

## Steps
1. This time the definition of the compare_to method from the class template is outside the definition. Because this is is part of the function template, the compiler will make sure the definition it generates is constrained to the translation unit where it shows up. Because of that, we won' t have redefinition linker errors that one might expect here. The code will compile, link, run and produce the output here.



## References
1. 
2. 

