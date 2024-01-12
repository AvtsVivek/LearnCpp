# Pass unique pointer by reference.

## Notes
1. Demos returning of Unique pointers from a function
2. The compiler does some optimizations and doesn't return a copy here it's returning something like a reference to the local object.
3. We can prove this by looking at the address of objects in memory.
4. This is not standard behavior, some compilers may actually return by value by making a copy. 
5. The compilers have some freedom to choose their own way to do things.
6. This reset is going to modify this shared pointer object. So we cannot do that.

## References

1. 

