# Subscript operator introduction

## Notes
1. The subscript operator is a `binary operator`. Binary means that which works on two objects. 

2. This subscirpt operator is what we were using to read and manipulate data from arrays.

3. The subscript operator look like this
```cpp
operator[]
```

1. It is one of the operator that MUST be set up only as a member function.

2. The first of this binary is the object where you want to use the subscript operator. The second param of this binary is the index which will specify what you want to about that object.

3. The compiler will transform the following 

```cpp
p1[0]
```
to the following.

```cpp
p1.operator[](0)
```

4. What we want to do in this example is the following. Lets say we have a 2 D point class, having x cocordinate and y coordinate. Further lets say p1 is the object of that point class. Then we want to define an sub script operator such that, p1[0] should give x co, and p1[1] should give the y co. We can only do this as public member function. 

5. Also we are using dynamic assert, assert( (index == 0) || (index == 1));

## References

1. 