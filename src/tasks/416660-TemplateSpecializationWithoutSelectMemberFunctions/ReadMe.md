# Auto

## Notes
1. When we run, the following code will give Banana

```cpp
char_ptr_box.add("Apple");
char_ptr_box.add("Kiwi");
char_ptr_box.add("Banana");
std::cout << "char_ptr_box : " << char_ptr_box << std::endl;
std::cout << "char_ptr_box.get_max(): " << char_ptr_box.get_max() << std::endl;
```

This is the output.

```txt
char_ptr_box : BoxContainer : [ size :  3, capacity : 5, items : Apple Kiwi Banana ]
char_ptr_box.get_max(): Banana
```

So Kiwi should be the answer, because it comes later in the alphabet, but it is giving Banana. 
This is because, in our current implimentation of get_max, we are comparing what ever we storing in our container directly pointers. But what we have is string data. This does not work for string data. 

We need to specialize the get max method to work with cont char strings. 



## References

1. 

