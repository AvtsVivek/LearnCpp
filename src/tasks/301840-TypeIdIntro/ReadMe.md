# Introduces TypeId

## Notes
1. Cpp has typeid operator. Not typeof.
2. typeid is a C++ language operator which returns type identification information at run time. It basically returns a type_info object, which is equality-comparable with other type_info objects.

3. When typeid(someType).name() returns i, it means the following

    i: integer
    Pi: pointer to integer variable
    Ppi: pointer to a pointer to integer variable


## References
1. https://stackoverflow.com/a/1986485/1977871
2. https://stackoverflow.com/a/16268102/1977871

