# Configure Cpp

## Steps
1. Compiler correctly and will give the following output.

```txt
result : true     
map [Steve,Murphy]
```

2. This time all the definitions for our template specialization show up inside the class definition. Methods declared inside class definitions are automatically inlined by the compiler. In other words, they are constrained to the translation unit where they show up and they aren't visible or callable from other translation units. That's why we're not getting nasty linker errors. The code will compile, link, run and produce the output here.



## References
1. 

