# Auto

## Notes

1. When you run the example, only the ctor is called. No destructor is called.

2. Now add the following delete operator as well, then run. Destructor is now called.

```cpp
delete p_box;
```

3. We are creating a Box object on the heap and not actively releasing memory. We will see the constructor called to build the object, we will print the volume of the object and that'll work becuase we have the object handy in memory, but our main function will exit without returning the memory to the operating system, so we won't see the destructor called. The OS will keep thinking the memory belongs to our program, long after we're done using the memory.

4. Now, replace the main method with the following. In this case, we are not usein delete, but instead we are using unique_ptr. So destructor is called.

```cpp
int main()
{
    std::unique_ptr<Box> p_box = std::make_unique<Box>(1,2,3);
    std::cout << "volume : " << p_box->volume() << std::endl;
    return 0;
}
```

## References

1. 

