# Demos array creation on heap

## Notes
1. We need to delete explicitly like below. Have the line commented out, the memory for the array won't be released and we won't see the destructors for Dogs 4~6 called. 
2. If we delete explicitly, everything goes as expected and the destructors are called when we exit this scope.

```cpp
delete[] p_dog_array_raw;
```

## References

1. 

