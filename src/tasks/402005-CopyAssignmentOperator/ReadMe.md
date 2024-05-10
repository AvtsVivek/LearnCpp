# Auto

## Notes
1. This is an operator that allowes us to copy an object into another object.
2. In general we can do some thing like the following, even if we do not have a copy operator defined.

```cpp
p1 = p2;
```

3. This works even if we do not have a copy assignment operator defined. This is because the compiler creates a default copy operator.

4. This default operator does shallow copy, and not a deep copy. So if you have pointers, then a shallow copy will simply copy the pointer. This means that the pointer will refer to the same address.

5. The syntax is as follows. 

```cpp
Point& operator= (const Point& right_operand){
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != & right_operand){
		delete p_data;
		p_data = new int(*(right_operand.p_data));
		m_x =  right_operand.m_x;
		m_y = right_operand.m_y;
	}
	return *this;
}
```

   1. operator=
   2. right_operand is what you want the as the second parameter
   3. The copy assignment operator can only be done as a member function. Cpp compiler does not allow the operator method as a non member.
   4. this != & right_operand. Here we ensure what we have on left is different from what we have on right.


## References

1. 

