# Auto

## Notes
1. This demos weak ordering.
2. In this example we had setup a custom spaceship operator. So we need to setup an equals equals operator as follows. For a default spaceship operator, the compiler generates one. But here its a custome one. 

```cpp
bool operator==(const ComparableString& right_side) const{
    return ( m_str.size() == right_side.m_str.size());
}
```

3. Here we can do the following as well.

```cpp
ComparableString cmp_str1("Fog");
ComparableString cmp_str2("Dogy");
```

```cpp
ComparableString cmp_str1("Hello");
ComparableString cmp_str2("Hellooo");
```

4. Since we are creating our own three way comparision operator, and not defaulted it, we have to setup our own `==` operator, the compiler is not going to generate one for you. 

5. 

## References

1. 

