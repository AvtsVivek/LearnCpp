# Auto

## Notes
1. Size and lenght of arrays. 

2. The sizeof() operator in C++ returns the size of the passed variable or data in bytes, plus the total number of bytes required to store an array. So, if we divide the size of the array by the size acquired by each element of the same, we can get the total number of elements present in the array.

3. We can also find the length of a given array using pointers. A pointer is a variable that stores the memory address of the object instead of storing the object itself. Let us see how we can use a pointer to get the length of an array.

4. The expression `*(arr+1)` gives us the address of the memory space just after the array’s last element. Hence, the difference between it and the array’s starting location or the base address `(arr)` gives us the total number of elements in the given array.



## References
1. https://www.digitalocean.com/community/tutorials/find-array-length-in-c-plus-plus


