# Shared Pointers

## Notes
1. `std::shared_ptr` is a smart pointer that retains shared ownership of an object through a pointer. Several shared_ptr objects may own the same object. The object is destroyed and its memory deallocated when either of the following happens:
   1. the last remaining shared_ptr owning the object is destroyed;
   2. the last remaining shared_ptr owning the object is assigned another pointer via `operator= or reset()`.


## References
1. 

