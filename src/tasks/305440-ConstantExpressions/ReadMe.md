# constexpr 

## Notes
1. The constant is evaluated at compile time. Then that evaluated value is set as a const to that variable.
2. Later during execution, that variable is used directly without evaluation. This saves sometime during actual execution.
3. constexpr are also const so you canot reassign.
4. Also you can use static_assert to so dome compile checks.
5. static_assert performs compile-time assertion checking

```cpp
static_assert( SOME_LIB_MAJOR_VERSION == 123);
```

5. If the above test fails, then you can get compile error. We can use this to check some version of a library. If that version is not available, then we can throw compile time error.

6. What we can have inside of static_assert is a static expression, which can be evaluated at compile time.


## References

1. No Video found
2. https://stackoverflow.com/q/13346879/1977871
3. https://stackoverflow.com/q/14116003/1977871
4. https://stackoverflow.com/q/4748083/1977871
5. https://en.cppreference.com/w/cpp/language/static_assert
   .

