# Auto

## Notes

1. Here we setup some operations to enable transformations to convert from one type to another. 

2. Say we have a number class that wraps up an integer. 

```cpp
class Number
{
public:
    Number() = default;
    Number(int value);

private:
    int m_wrapped_int{0};
};
```
4. Let say we want to transform(conversion) this number to a double or a point.

3. We define an operator on the number so that we can caste it to a double.

```cpp
double d1 = double(n1);
```

3. We also have defined an operator to caste the numbert to a point.

4. But we will not be able to use as follows.

```cpp
Point p1 = Point(n1);
```

The reason is the compiler will interpret `Point(n1)` as a call to Point classes ctor. So if there is ctor defined in the point class, then it will call the ctor and not the operator. If the ctor is not present, then an error will be shown. 

5. So we have to use the following explicit casting.

```cpp
static_cast<Point>(n1);
```

6. Note we have used the `explicit` keyword. So implicit caste does not work like the folloiwng.

```cpp
sum(n1, n2); 
```

If the above needs to work, you need to remove the `explicit` keyword from the following.

```cpp
explicit operator double() const
{
    std::cout << "Using type conversion from Number to double" << std::endl;
    return (static_cast<double>(m_wrapped_int));
}
```

7. 

## References

1. https://stackoverflow.com/a/121163/1977871
2. https://en.cppreference.com/w/cpp/keyword/explicit
3. https://en.cppreference.com/w/cpp/language/explicit




