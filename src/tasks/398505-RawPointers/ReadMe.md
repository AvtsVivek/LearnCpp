# Auto

## Notes

1. Manually releasing memory yourself through the delete operator of raw pointers is a pain in the neck. Smart pointers are a a solution offered by modern C++ to release the memory automatically when the pointer managing the memeory goes out of scope.

2. In this example, we are manually deleting the object. This example introduces delete operator.

```cpp
delete p_dog2; // Calls the destructor
```

3. If we do not do the above, i.e manually deleting, then the object is not destroyed, and the memory is eventually leaked.

4. Comment out the following three lines, and run again.

```cpp
delete p_dog2; // Calls the destructor
delete p_int1;
std::cout << "deleting done" << std::endl;
```

5. Leaking of memory means, the memory stays in the process indefinitely. 
6. So we need smart pointers.

## References

1. 

