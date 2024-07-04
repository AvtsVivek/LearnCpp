# Auto

## Notes
1. Here a new integer object is getting created which is at a new address. Then the value is getting copied. 

```cpp
Point& operator= (const Point& right_operand){
        ...
        p_data = new int(*(right_operand.p_data));
        ...
    }
    return *this;
}
```

2. The copy assignment operator can only be done as a member function, and not as non member function. 
3. operator=
4. right_operand is what you want the as the second parameter
5. The copy assignment operator can only be done as a member function. Cpp compiler does not allow the operator method as a non member.
6. this != & right_operand. Here we ensure what we have on left is different from what we have on right.


## References

1. 

