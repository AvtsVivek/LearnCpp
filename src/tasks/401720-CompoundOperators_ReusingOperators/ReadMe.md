# Auto

## Notes
1. First we are defining the **+=** for the point class. This means we could some thing like the following.

```cpp
p1+=p2;
```

2. Basically we are adding p2 to p1. 

3. Then we are defining **operator+** as follows. So we are duing the **+=** defined above.

```cpp
inline Point operator+(const Point& left , const Point& right){
	Point p(left);
	return p+=right;
}
```


## References

1. 

