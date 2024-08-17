# Auto

## Notes
1. Compiler correctly and will give the following output.

```txt
result : true     
map [Steve,Murphy]
```

2. The definition for compare_to will still show up in multiple files, but because of the inline keyword , we are constraining that definition to the translation unit where it shows up. In other words the definition in the map.cpp file won't be visible to any other translation unit in the program. The call to compare_to in main.cpp will use the definition brought in by the #include "map.h" statement in the main.cpp file.

## References

1. 

