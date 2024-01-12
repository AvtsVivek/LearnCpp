# Demos Moving of ownership.

## Notes
1. Explicit move. 
2. Move the ownership of the memory that the unique pointer is managing to the copied pointer.
3. Will set the original pointer to null pointer.
4. Ownership will move to the body of the function and memory will be released when function returns. Not what you typically want.

5. An implicit move is done when object is created in place as a temporary
	
```cpp
do_something_with_dog_v1(std::make_unique<Dog>("Temporary Dog"));
```
6. 

## References

1. 

