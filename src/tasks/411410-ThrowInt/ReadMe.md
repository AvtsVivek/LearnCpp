# Auto

## Notes
1. Interfaces are nothing but a way to describe the behavior of a class without committing to the implementation of the class. 

2. In C++ programming there is no built-in concept of interfaces. 

3. In order to create an interface, we need to create an abstract class which is having only pure virtual methods. 

4. In C++, Interfaces are also called pure abstract classes.

5. A Pure Virtual Function is a function where we only declare the function but not the function definition. The implementation for pure virtual methods is done at the derived class by method/function overriding. A function is said to be a pure virtual function if it is defined in the class as follows:

```cpp
virtual datatype functionName(parameter1, parameter2,…) = 0
```

3. `Abstract Class`: An abstract class is a class that is specially designed to be used as a base class. Abstract class must have at least one pure virtual function. It may have variables and normal functions. The derived classes of an abstract class must implement all the pure virtual functions of their base class or else they too become abstract.


## References

1. https://www.geeksforgeeks.org/cpp-program-to-create-an-interface/

