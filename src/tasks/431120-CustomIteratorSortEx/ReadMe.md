# Auto

## Notes

1. This is not currently compiling. Need to look into it.

2. Sort algorithms expect/need random access iterators. 

3. For an iterator to have random access capabilites we need to have the following operators defined.

```cpp
//Random access
Iterator& operator+=(const difference_type offset) {
	m_ptr += offset;
	return *this;
}

Iterator operator+(const difference_type offset) const  {
	Iterator tmp = *this;
	return tmp += offset;
}

Iterator& operator-=(const difference_type offset) {
	return *this += -offset;
}

Iterator operator-(const difference_type offset) const  {
	Iterator tmp = *this;
	return tmp -= offset;
}

difference_type operator-(const Iterator& right) const {
	return m_ptr - right.m_ptr;
}

reference_type operator[](const difference_type offset) const  {
	return *(*this + offset);
}

bool operator<(const Iterator& right) const  {
	return m_ptr < right.m_ptr;
}

bool operator>(const Iterator& right) const  {
	return right < *this;
}

bool operator<=(const Iterator& right) const {
	return !(right < *this);
}

bool operator>=(const Iterator& right) const  {
	return !(*this < right);
}


friend Iterator operator+(const difference_type offset, const Iterator& it){
	Iterator tmp = it;
	return tmp += offset;
}
//Random access - End
```

4. 

## References

1. [C++ STL Random-Access Iterators](https://www.youtube.com/watch?v=KUB0-2frHJw)
2. https://github.com/douglascraigschmidt/CPlusPlus/tree/master/STL/S-04/4.7

