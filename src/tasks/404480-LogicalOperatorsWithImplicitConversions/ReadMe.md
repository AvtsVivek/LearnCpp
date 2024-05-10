# Auto

## Notes
1. When the `binary operator` is set up as a member function, implicit conversions dont work from the left operand. 

2. The `left operand` is the current object on which you are calling the operator function. So implicit conversion will not work.

3. So for the implicit conversions to work, the only choice we have is to impliment the operator as non member global functions.

4. Note the ctor that takes an int here is explicit. Becuase we dont want to use it in an implicit conversion for this example.

```cpp
public:
	Number() = default;
	explicit Number(int value );
```

5. So when we have the following, the int 15 will not be implicitly converted to number, because the ctor is marked explicit(above).

```cpp
std::cout << "15 < n2 : " << (15 < n2) << std::endl;
```

6. So we need logical operators. 

7. Can std::rel_ops namesspace help? The answer is no. This is because the parameter data types are different on both sides of the operator. The first parameter is an int and the second is Number.

8. So here we have three overloads for each operator, for each of comparision to work. 


## References

1. 

