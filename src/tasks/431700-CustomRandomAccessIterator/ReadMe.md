# Auto

## Notes
1. Sort algorithms expect/need random access iterators. 
2. For an iterator to have random access capabilites we need to have the following operators defined.

```cpp
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
```

   1. 


## References

1. 

