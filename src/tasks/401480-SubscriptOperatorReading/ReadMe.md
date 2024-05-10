# Subscript operator introduction

## Notes
1. The subscript operator is a `binary operator`. Binary means that which works on two objects.
2. The subscript operator look like this
```cpp
operator[]
```
3. It is one of the operator that MUST be set up as a member function.
4. The first of this binary is the object where you want to use the subscript operator. The second param of this binary is the index which will specify what you want to about that object.

5. The compiler will transform the following to  

```cpp
p1[0]
```
to

```cpp
p1.operator[](0)
```

## References

1. 

