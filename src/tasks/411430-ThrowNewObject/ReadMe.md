# Auto

## Notes
1. Throwing an object created using the `New` operator.

2. In this example, we are doing dyanamic memory allocation with the new operator inside of the try block. 

```cpp
try
{
    Item *item_ptr = new Item();
    if (d == 0)
    {
        std::cout << "About to throw 0 ..." << std::endl;
        throw 0;
    }
    std::cout << "Keeping doing some other things..." << std::endl;
}
catch (int ex)
{
    std::cout << "Something went wrong. Exception thrown : " << ex << std::endl;
}
```

3. Here again, any local vaiables to the try block are destroyed before reaching the catch block. There is no way for us to release this memory. 

4. The Item class has both ctor as well as destructor. But note only the ctor is called and not the desctructor. This means the memory is not released, or its leaked. 

```cpp
Item constructor called
About to throw 0 ...
Something went wrong. Exception thrown : 0
END.
```

5. We can use smart pointers. By this, the destructors are called automatically. 


## References

1. 

