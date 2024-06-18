# Auto

## Notes

1. Manually releasing memory yourself through the delete operator of raw pointers is a pain in the neck. Smart pointers are a a solution offered by modern C++ to release the memory automatically when the pointer manageing the memeory goes out of scope.

2. In this example, we are manually deleting the object.   

```cpp
delete p_dog2; // Calls the destructor
```

3. If we do not do the above, then the object is not destroyed, and the memory is leaked.
4. Commnetout the following three lines, and run again.

```cpp
delete p_dog2; // Calls the destructor
delete p_int1;
std::cout << "deleting done" << std::endl;
```

5. Leaking of memory means, the memory stays in the process indefinitely. 

## References

1. 

