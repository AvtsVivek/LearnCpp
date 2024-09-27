# Auto

## Notes

1. See the reference. With code duplication
2. Implementation With Code Duplication. The implementation of iterator and const iterator class are extremely similar, except that dereferencing returns T& for iterator and const T& for const iterator. We can just copy and paste most of the code for the iterator for implementing the const iterator. The drawback is there will be “code duplications”.
3. This works. But it has lots of “code duplications” between the Iterator implementation and the ConstIterator implementation.
## References

1. https://leimao.github.io/blog/CPP-Const-Iterator/


