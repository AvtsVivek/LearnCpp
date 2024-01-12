# Copy

## Notes
1. What we are trying to do in this example, is pass the unique pointer to a function by value.
2. Passing a unique pointer to a function which takes a unique pointer by value.
3. Build and Run. You will see something like this.

```txt
.\main.cpp: In function 'int main()':
.\main.cpp:18:33: error: use of deleted function 'std::unique_ptr<_Tp, _Dp>::unique_ptr(const std::unique_ptr<_Tp, _Dp>&) [with _Tp = Dog; _Dp 
= std::default_delete<Dog>]'
   18 |         do_something_with_dog_v1(p_dog_1); // copy detected,
      |         ~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~
In file included from C:/Program Files/mingw64/include/c++/13.2.0/memory:78,
                 from .\main.cpp:2:
C:/Program Files/mingw64/include/c++/13.2.0/bits/unique_ptr.h:522:7: note: declared here
  522 |       unique_ptr(const unique_ptr&) = delete;
      |       ^~~~~~~~~~
.\main.cpp:6:52: note:   initializing argument 1 of 'void do_something_with_dog_v1(std::unique_ptr<Dog>)'
    6 | void do_something_with_dog_v1(std::unique_ptr<Dog> d)

```

2. We are trying to make a copy. But copying is not allowed with unique pointers.
3. Passing by value means, we are going make copies.

4. Here we go.

5. 

## References

1. 

