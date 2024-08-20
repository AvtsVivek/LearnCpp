# Auto

## Notes
1. If you think about it, after the pre-processing phase, the main.cpp translation unit will only contain the function template declaration. Template resolution will generate the function declaration. The function template definition, which is sitting in some other .cpp file won't be processed and won't be found at the linker stage because , please remember this, template code is not real c++ code, it's just blueprint code that's meant to be used to generate real code. Hence the linker error you'll see if you try to compile and run the code here.


## References

1. 

