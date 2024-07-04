# Auto

## Notes
1. This is an operator that allowes us to copy an object into another object.
2. In general we can do some thing like the following, even if we do not have a copy operator defined.

```cpp
p1 = p2;
```

3. This works even if we do not have a copy assignment operator defined. This is because the compiler creates a default copy operator.

4. This default operator does `shallow copy`, and not a `deep copy`. So if you have pointers, then a shallow copy will simply copy the pointer. This means that the pointer will refer to the same address. So once we do the 

```cpp
p1.set_data(55);
```

check what the three points look like. 

5. What we have in this example here is the following. This is just a [output stream operator](https://learn.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes). 

```cpp
inline std::ostream &operator<<(std::ostream &os, const Point &p)
{
	os << "Point [ x : " << p.m_x << ", y : " << p.m_y
	   << " data : " << *(p.p_data) << "]";
	return os;
}
```

## References

1. 

