# Auto

## Notes
1. 

```cpp
template <typename T>
concept TinyType = requires(T t) {
    sizeof(T) <= 4;          // Simple requirement : Only enforces syntax
    requires sizeof(T) <= 4; // Nested requirements 
    // This enforces that the size of the object less than four
};
```

## References

1. 

