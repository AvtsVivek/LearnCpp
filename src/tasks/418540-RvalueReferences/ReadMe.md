# Auto

## Notes
1. This is the mechanism we have in cpp to extend the life time of temp values. 
2. When an rvalue reference is bound to an rvalue, the life of the rvalue is extended, and we can manipulate it through the rvalue reference. 
3. When we have the following, 
```cpp
int&& result_one = x + y;
```
the result is not copied.

4. But instead if we have the following, 
```cpp
int result_two = x + y;
```
the result is indeed copied.

5. Rvalue references extend the lifetime of temporaries. 

## References

1. 

