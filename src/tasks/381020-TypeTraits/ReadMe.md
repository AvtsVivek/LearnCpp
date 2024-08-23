# Auto

## Notes
1. Performs compile-time assertion checking.
2. Introduces `static_assert`
3. Type traits are designed to work on types and not on values.

4. The following will give error. a_int is an object and not a type.
```cpp
int a_int{45};
// ERROR: have to pass in a type, not a variable like a
std::cout << "std::is_integral<int> : " << std::is_integral<a_int> << std::endl; 
```

5. 


## References

1. https://en.cppreference.com/w/cpp/header/type_traits
2. https://en.cppreference.com/w/cpp/language/static_assert

