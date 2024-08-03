# Auto

## Notes
1. Introduces pure virtual functions.
2. A pure virtual function is declared by assigning 0 in the declaration.
3. The movement you have one pure virtual function in a class, then that class becomes an abstract class.
4. If a class has at least one pure virtua function, it becomes an abstract clas.
5. You cant create objects of an abstract class. Compiler will result.
6. Derived classes from an abstract class must explicitly override all the pure virtual functions from the abstract parent class, if tehy dont, they thehselves become abstract.
7. Pure virtual functions dont have an implementation in the abstract class. They are ment to be inpllimented by deriving classes.
8. You cant call the pure virtual functions from the contstructor of the abstract class.
9. The ctor of the abstract class is used by deriving class to build up the base part of the object. 


## References

1. https://www.geeksforgeeks.org/pure-virtual-functions-and-abstract-classes/

