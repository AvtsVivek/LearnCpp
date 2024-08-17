# Auto

## Notes
1. This example extends earlier example. This correctly outputs the max string. 
2. In the boxcontainer.h file, we now have the specialized funtion as follows.
3. The following is moved to cpp file, rather than header file.

```cpp

template <>
inline const char *BoxContainer<const char *>::get_max() const
{
	std::cout << "Specialized method called to get max on const char*" << std::endl;
    ...
}
```

3. Because of this, the correct output comes out. 


## References

1. 

