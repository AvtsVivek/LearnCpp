# Auto

## Notes
1. We have defined an operator on the number so that we can caste it to a double.

```cpp
double d1 = double(n1);
```

2. We also have defined an operator to caste the numbert to a point.
3. But we will not be able to use as follows.

```cpp
Point p1 = Point(n1);
```

The reason is the compiler will interpret `Point(n1)` as a call to Point classes ctor. So if there is ctor defined in the point class, then it will call the ctor and not the operator. If the ctor is not present, then an error will be shown. 

4. So we have to use the following explicit.

```cpp
static_cast<Point>(n1);
```


## References

1. 

