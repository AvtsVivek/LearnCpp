# Auto

## Notes
1. We want to setup a 3 way comparision operator for your type, but your type happens to have members that dont implement the three way comparision operator themselves. 

2. The following two operators are from Integer class. If these are commented out, then we get a compiler error.
```cpp
bool operator==(const Integer &right) const
{
    return (m_wraped_int == right.m_wraped_int);
}
bool operator<(const Integer &right) const
{
    return (m_wraped_int < right.m_wraped_int);
}
```
3. The Item type has a member whose type is Integer class. 
4. The three way comparision operator on the item class. The compiler cannot compile the Item class. This is because the compiler can handle int types, but not the Integer class. The compioer does not have any idea how to compare integer objects. 

```cpp
int a{1};
int b{2};
int c{3};
Integer d;
```

5. So the three way comparision operator that is present in the Item class will be deleted by the compiler becuase it cannot use it. 

6. Now uncomment the following from the Integer class.



## References

1. 

