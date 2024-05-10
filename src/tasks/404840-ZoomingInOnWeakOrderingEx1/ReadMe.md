# Auto

## Notes
1. In this example we had setup a custom spaceship operator. So we need to setup an equals equals operator as follows. For a default spaceship operator, the compiler generates one. But here its a custome one. 

```cpp
bool operator==(const ComparableString& right_side) const{
    return ( m_str.size() == right_side.m_str.size());
}
```

2. Here we can do the following as well.

```cpp
ComparableString cmp_str1("Fog");
ComparableString cmp_str2("Dogy");
```

```cpp
ComparableString cmp_str1("Hello");
ComparableString cmp_str2("Hellooo");
```

## References

1. 

