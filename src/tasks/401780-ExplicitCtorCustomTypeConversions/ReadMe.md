# Auto

## Notes
1. The second operator is implicitly converted to a non number. 

2. So when we have the following,

```cpp
std::cout << "n1 + 2  : " << (n1 + 2) << std::endl;
```

The compiler will try to implicitly convert integer 2 to the number using the ctor of the number.

```cpp
Number(int value );
```

But if you mark this to explicit ctor as follow, then it will not work. 

```cpp
explicit Number(int value );
```

Then it will result in a compiler error. So if we want the ctor to prevent it to be used in an implicit conversion, we can mark it as explicit as shown above. Now the compiler cannot use the ctor to convert this integer 2 to a number class object that we can use in the expression such as `(n1 + 2)`.  

```txt
no known conversion for argument 2 from 'int' to 'const Number&'
```

You can add an implicit operetor as follows, then it will work.

```cpp
operator double()const{
    return (static_cast <double> (m_wrapped_int));
}
```

Now try making this operator also explicit. So what we now have is both the ctor and the operator explicit as follows. Then again it WILL NOT work.

```cpp
explicit Number(int value);

explicit operator double()const{
    return (static_cast <double> (m_wrapped_int));
}
```

So to make it work, make one of those two into implicit by removing the explict key word. Then it will work.

3. Finally note here that the + operator is a non member function.   

## References

1. 

