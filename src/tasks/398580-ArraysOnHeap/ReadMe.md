# Demos array creation on heap

## Notes
1. Here the objects are allocated memory on the heap. Why? Not sure. May be because `new` keyword is used. 

```cpp
Dog *p_dog_array_raw = new Dog[3]{Dog("Dog4"), Dog("Dog5"), Dog("Dog6")};
```

2. We need to delete explicitly like below. Have the line commented out, the memory for the array won't be released and we won't see the destructors for Dogs 4~6 called. 

3. If we delete explicitly, everything goes as expected and the destructors are called when we exit this scope.

```cpp
delete[] p_dog_array_raw;
```

4. So the problem with this is that we may forget to use the delete operator. So we need to use the unique pointer. This is shown in the subsequent example.

## References

1. 

