# Shared Pointers

## Notes
1. `std::shared_ptr` is a smart pointer that retains shared ownership of an object through a pointer. Several shared_ptr objects may own the same object. The object is destroyed and its memory deallocated when either of the following happens:
   1. the last remaining shared_ptr owning the object is destroyed;
   2. the last remaining shared_ptr owning the object is assigned another pointer via `operator= or reset()`.

2. So we have the `{}`. If you comment it out, then we get the output as follows.

```txt
After reset
Use count for dog_ptr_1 : 1
Use count for dog_ptr_2 : 0
Returning ...
Destructor for dog Dog1 called
```

If we keep the `{}`, then we have the output as follows.

```txt
After reset
Use count for dog_ptr_1 : 1
Use count for dog_ptr_2 : 0
Destructor for dog Dog1 called
Returning ...
```

## References
1. 

