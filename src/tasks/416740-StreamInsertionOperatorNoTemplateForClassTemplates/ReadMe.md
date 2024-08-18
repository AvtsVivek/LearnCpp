# Auto

## Notes

1. Friend functions that take a parameter (or more) of our template class. The goal is so that we are able to model an operator<< for our template class. 

2. Stream output operator, is the use case here. Setup free standing non member global operator functions and make them friends of our class template. This is useful, when we want our operator functions to access private data of our class templates. The stream output operator is the use case here.

3. The problem
   
```cpp   
friend std::ostream& operator<< (std::ostream&, const BoxContainer<T>&);
```

4. This will give compilation error.

## References

1. Good explanation on templates and friends.
2. https://isocpp.org/wiki/faq/templates#template-friends


