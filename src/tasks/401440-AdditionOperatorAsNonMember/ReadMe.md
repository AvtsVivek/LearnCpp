# Auto

## Notes
1. Setup an operator as a non mumber function, free standing global function.

2. Here the function is done inline because we want this to live in a header file, and we make it inline to tell the compiler that this is going to be constrained to a single translation unit. And if we inclue this header in multiple files, we are not going to violate single definition rule.

```cpp
inline Point operator+(const Point& left, const Point& right){
	return Point(left.m_x + right.m_x , left.m_y + right.m_y );
}
```

3. Its not necessary to make it inline. You can keep this in a cpp file to look like the following.

```cpp
Point operator+(const Point& left, const Point& right){
	return Point(left.m_x + right.m_x , left.m_y + right.m_y );
}
```

4. Also note the following. The non member operator method is a friend to the point class. 

```cpp
friend Point operator+(const Point& left, const Point& right);
```

## References

1. 

