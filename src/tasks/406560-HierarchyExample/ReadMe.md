# Auto

## Notes
1. Protected exercise. The keyword, protected will not work. You have to change it to public.

```cpp
class A{
	protected :
	 int m_x;
};
```

2. Thats because, the the following is a free standing non member function. 

```cpp
inline void apply_changes( B& b){
	b.m_x *=2;
}
```

## References

1. 

