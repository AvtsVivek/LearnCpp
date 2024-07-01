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

4. Here is the quiz, 
   1. When our type has both operator+ and operator+= overloaded, you have to implement operator+ in terms of operator+= .

   2. And the answer is - Yes. You don't have to implement operator+ in terms of operator+= . It's a possibility but not the only way.





## References

1. 

