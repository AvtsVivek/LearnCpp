# Auto

## Notes
1. In most cases, the spaceship operators are member functions. This is a rare case scenerio where these operators are needed as non member function.  

2. In this example, the three way comparision operator or the spaceship operator is a non member function. 

3. Note the following is commented out, because member functions in the Number class do not work.

```cpp
auto operator<=>(const Number& right) const = default;
auto operator<=> (int n) const{
    return m_wrapped_int <=> n;
}
bool operator==(const Number& right) const{
    return m_wrapped_int == right.m_wrapped_int;
}
bool operator==(int n){
    return m_wrapped_int == n;
}
```

## References

1. 

