# Shared Pointers

## Notes
1. Shared pointers are another kind of smart pointers that we have in cpp.
2. Shared pointers have a concept of reference count. It has [use_count](https://en.cppreference.com/w/cpp/memory/shared_ptr/use_count) method.
3.  

4. `std::shared_ptr` is a smart pointer that retains shared ownership of an object through a pointer. Several shared_ptr objects may own the same object. The object is destroyed and its memory deallocated when either of the following happens:
   1. the last remaining shared_ptr owning the object is destroyed;
   2. the last remaining shared_ptr owning the object is assigned another pointer via `operator= or reset()`.

5. Here we have.

6. 


## References
1. 

