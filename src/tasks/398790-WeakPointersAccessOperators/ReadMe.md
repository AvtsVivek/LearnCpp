# Auto

## Notes

1. They dont have the pointer access operator(->) or the reference operator(*).

2. Build and Run. You will get errors. like the following.

```txt
.\main.cpp: In function 'int main()':
.\main.cpp:13:35: error: 'weak_ptr_dog_1' was not declared in this scope
   13 |     std::cout << "Dog name : " << weak_ptr_dog_1->get_name() << std::endl; // Compiler error : No -> operator
      |                                   ^~~~~~~~~~~~~~
.\main.cpp:14:44: error: 'weak_ptr_int_1' was not declared in this scope
   14 |     std::cout << "Pointed to value : " << *weak_ptr_int_1 << std::endl; // Compiler error : No * operator
```

## References

1. https://en.cppreference.com/w/cpp/memory/weak_ptr
2. https://stackoverflow.com/q/15648844/1977871

