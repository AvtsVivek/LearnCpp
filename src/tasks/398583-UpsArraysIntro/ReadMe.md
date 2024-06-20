# Arrays on heap

## Notes
1. Demos Array allocated on the heap with unique_ptr. 

2. Release space for array automatically 

3. Note the `{}` as shown below. Remove them and run the program. If you have the `{}`, you will see that the destructors are called before the control goes out of the brackets.

```cpp
{
    std::unique_ptr<Dog[]> arr_ptr = std::unique_ptr<Dog[]>(new Dog[3]{Dog("Dog7"), Dog("Dog8"), Dog("Dog9")});
 
    for (size_t i{0}; i < 3; ++i)
    {
        arr_ptr[i].print_info();
    }
}
```

4. 

## References
1. 

