# Auto

## Notes
1. Here we will be modifying out object to support input stream operator.
2. We pass the second parameter by non const reference. Thats because, we need to modify this point parameter in the body of our function.

```cpp
inline std::istream& operator>>(std::istream& is, Point& p){
```

## References

1. 

