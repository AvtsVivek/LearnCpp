# Concepts

## Notes
1. we are requiring that the things stored in our array be implicitly convertible to double. That pretty much covers all fundamental numeric types, which is what we want.


2. Need to add the following required concept.

```cpp
requires std::convertible_to<T, double>
```

## References

1. https://learn.microsoft.com/en-us/dotnet/csharp/programming-guide/generics/constraints-on-type-parameters
2. https://en.cppreference.com/w/cpp/language/constraints


