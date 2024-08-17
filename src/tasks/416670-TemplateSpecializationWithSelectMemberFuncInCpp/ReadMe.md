# Auto

## Notes
1. This example extends earlier example. This correctly outputs the max string. 
2. In the boxcontainer.h file, we now have the specialized funtion as follows.

```cpp

template <>
inline const char *BoxContainer<const char *>::get_max() const
{
	std::cout << "Specialized method called to get max on const char*" << std::endl;
	size_t max_index = 0;

	for (size_t i{}; i < m_size; ++i)
	{

		if ((strcmp(m_items[i], m_items[max_index])) > 0)
		{
			max_index = i;
		}
	}

	return m_items[max_index];
}
```

3. Because of this, the correct output comes out. 


## References

1. 

