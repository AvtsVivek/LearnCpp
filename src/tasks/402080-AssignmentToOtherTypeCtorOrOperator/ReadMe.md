# Auto

## Notes
1. Consider the following.


```cpp
Point p1(10, 10);
Number n1(22);
// Assignment
p1 = n1;
```

2. When we are assigning(`p1 = n1;`), there are three options the compiler can choose. 

3. They are options because, you can comment two of the following three options and the third one will be invoked. 

4. Option 1
```cpp
// point.h
void operator=(const Number &n); // Copy assignment operator for Number

// point.cpp
void Point::operator=(const Number &n)
{
    std::cout << "Option 1: Point Copy assignment operator from Number called..." << std::endl;
    m_x = m_y = n.get_wrapped_int();
}
```

5. Option 2
```cpp
// point.h
Point(const Number &n); // Constructor from Number

// point.cpp
Point::Point(const Number &n)
{
    std::cout << "Option 2: Point Constructor from Number called..." << std::endl;
    m_x = m_y = n.get_wrapped_int();
}
```



6. Option 3
```cpp
// number.h
operator Point() const; //Type conversion operator from Number to Point. number.h

// number.cpp
Number::operator Point() const
{
	std::cout << "Option 3: Using type conversion from Number to Point" << std::endl;
	return Point(static_cast<double>(m_wrapped_int),
				 static_cast<double>(m_wrapped_int));
}
```

When we have option 1 and option 2, option 1 is choosen by the compiler.

When we have option 3 and option 1, option 1 is choosen by the compiler.

When we have option 3 and option 1, option 1 is choosen by the compiler.

So option 3 is last, only when option 1 and 2 does not exist.

And when all the three are present, then option 1 is choosen by the ctor.

## References

1. 

