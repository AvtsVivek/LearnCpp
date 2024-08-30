# Auto

## Notes
1. Two different syntaxes to setup alliases.

```cpp
// Using syntax
using str_comparator = bool (*)(const std::string &str1, const std::string &str2);

// With typedefs
typedef bool(*str_comparator) (const std::string& str1, const std::string& str2);
```

The second one is not recommended, as this is old. The new one is using syntax. That should be used.

## References

1. 

