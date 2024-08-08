# Auto

## Notes
1. Interfaces are nothing but a way to describe the behavior of a class without committing to the implementation of the class. 

2. In C++ programming there is no built-in concept of interfaces. 

3. In order to create an interface, we need to create an abstract class which is having only pure virtual methods. 

4. In C++, Interfaces are also called pure abstract classes.

5. A Pure Virtual Function is a function where we only declare the function but not the function definition. The implementation for pure virtual methods is done at the derived class by method/function overriding. 

6. A function is said to be a pure virtual function if it is defined in the class as follows. Note the assignment of 0.

```cpp
virtual datatype functionName(parameter1, parameter2,…) = 0
```

7. `Abstract Class`: An abstract class is a class that is specially designed to be used as a base class. Abstract class must have at least one pure virtual function. It may have variables and normal functions. The derived classes of an abstract class must implement all the pure virtual functions of their base class or else they too become abstract.

8. An abstract class with only pure virtual functions and no mumber variable can be used to model what is called an interface in object oriented programming. 

9. An interface is a specification of something that will be fully implemented in a derived class, but the swpecification itself resides in the abstract class. 

10. Interface is something that you can attach to your type to get superpowers. 

11. The StreamInsetable interface has a single job, allowing our types to insert data into output streams like std::cout. This is the functionality that this interface is going to add to our types. 

12. So when a point class impliments this interface, then this point objects will be able to print data to the output stream. 

13. The StreamInsertable class is introduced in the polymorphism section. 

## References

1. https://www.geeksforgeeks.org/cpp-program-to-create-an-interface/

