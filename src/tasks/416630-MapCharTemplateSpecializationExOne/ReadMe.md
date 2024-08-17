# Auto

## Notes
1. There will be link error. 

2. The definition of compare_to is set up outside the class definition. Because template specializations are real code, if the map.h file is included in multiple files, there will be multiple definitions for that method. Namely in each file where map.h is included. If multiple definitions show up in the same file, it will be a compiler error. If multiple definitions show up in different .cpp files, it will be a linker error, which is what we are experiencing here. The same definition is in map.cpp and in main.cpp.

## References

1. 

