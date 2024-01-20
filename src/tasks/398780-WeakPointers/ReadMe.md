# Auto

## Notes
1. std::weak_ptr is a smart pointer that holds a non-owning ("weak") reference to an object that is managed by std::shared_ptr.

2. It must be converted to std::shared_ptr in order to access the referenced object.

3. std::weak_ptr models temporary ownership: when an object needs to be accessed only if it exists, and it may be deleted at any time by someone else, std::weak_ptr is used to track the object, and it is converted to std::shared_ptr to assume temporary ownership. 

4. If the original std::shared_ptr is destroyed at this time, the object's lifetime is extended until the temporary std::shared_ptr is destroyed as well.

5. Non owning pointers that dont inplement the -> or * operator. You cant use them directly to read or modify data. -> is called pointer access operator. * is called the reference operator. 

6. Another kind of smart pointers.

7. They are special, in the sence that they dont own the data that they point to, sof if the week pointer goes out of scope, the memory that they point to is not going to be released because they dont own the memory.

8. They dont have the pointer access operator(->) or the reference operator(*).

## References

1. https://en.cppreference.com/w/cpp/memory/weak_ptr
2. https://stackoverflow.com/q/15648844/1977871

