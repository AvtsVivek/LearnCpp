# Auto

## Notes
1. This is an operator that allowes us to copy an object into another object.
2. In general we can do some thing like the following, even if we do not have a copy operator defined.

```cpp
p1 = p2;
```

3. This works even if we do not have a copy assignment operator defined. This is because the compiler creates a default copy operator.

4. This default operator does shallow copy, and not a deep copy. So if you have pointers, then a shallow copy will simply copy the pointer. This means that the pointer will refer to the same address.



## References

1. 

