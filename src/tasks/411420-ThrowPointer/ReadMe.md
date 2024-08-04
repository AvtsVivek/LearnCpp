# Auto

## Notes
1. Throwing a pointer to a local variable, is a recipe for disaster because by the time the catch block executes, the memory allocated and used in try block is pointing to invalid data. 

2. The program may seem to work sometimes but there are no guarantees you'll always get valid stuff if you dereference pointers allocated in the try block.

3. Once we leave the scope of the try block, any local variable is going to be destroyed. 

```cpp
try
{
    int var{55};
    int *int_ptr = &var;

    if (c == 0)
    {
        std::cout << "We are about to throw a pointer ..." << std::endl;
        throw int_ptr;
    }
    std::cout << "Keeping doing some other things..." << std::endl;
}
```

4. By the time, we hit the catch block, the dereferenced value may not be same. So here, `*ex` may not be 55. 

```cpp
catch (int *ex)
{
    std::cout << "Something went wrong. Exception thrown : " << *ex << std::endl;
}
```

5. The memrory location where that 55 is stored no longer belongs to the program, when the control reaches the catch block. The run time is free to use it for another purpose, howere it wants to use. 

6. 

## References

1. 

