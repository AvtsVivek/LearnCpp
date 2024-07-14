# Auto

## Notes
1. This is continuation from the earlier example, where we saw, how crazy it is to support and impliment all of the comparitive operators. 

2. In this example we will use the three way comparision operator, or the space ship operator in conjuntion with == operator to support the same functionality. This simplifies the stuff greately. We need to just have the following 4, instead of 18 as we saw in the previous example. 

```cpp
auto operator<=>(const Number &right) const = default;
auto operator<=>(int n) const
{
    return m_wrapped_int <=> n;
}
bool operator==(const Number &right) const
{
    return m_wrapped_int == right.m_wrapped_int;
}
bool operator==(int n)
{
    return m_wrapped_int == n;
}
```

3. Also note that the above operators need not be non member global functions, they can simply be member fucntions as well. 
4. With spaceship operators in cpp 20, the compiler itself does a lot of magic.  
5. In the previous example, we have seen that all the operators need to be non members free standing global functions. With these operators as members, its not possible, because we want the possibility of having an integer as left operand as below. Implicit conversions would not work with left operand. 

```cpp
std::cout << "15 > n2 : " << (15 > n2) << std::endl;
```

6. In the earlier example we also saw that with operator as member, the first operand has to be an object of your type. So in cpp 19 and below, the above would not work with member operators. It has to be this way. 

```cpp
std::cout << "15 > n2 : " << (n2 < 15 ) << std::endl;
```

7. Now with cpp 20, we have space ship operator, and the compiler does a lot of magic. So the compiler will rewrite this `(15 > n2)` as `(n2 <=> 15) < 0`

8. 

## References

1. 

