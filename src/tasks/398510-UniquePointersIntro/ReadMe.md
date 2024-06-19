# Unique Pointers

## Notes
1. Run this example similar to 398500-UniquePointersStackVars
2. First with `{}` and then without those braces. See the differnece. Observe for when the destructor is called.
3. Also note the how ctors and dtros are called. 

```txt
Constructor for dog Dog3 called.
Constructor for dog Dog5 called.
...
Destructor for dog Dog5 called
Destructor for dog Dog3 called
```

4. Note the `{}`  are not needed. Just remove them and then run the app. The Destructor is still called.

5. With smart pointers, we dont have to explicitly call the delete operator. The memory is released automatically, when the smart pointer goes out of scope.

6. Unique pointer is a smart pointer. In the below, the pointer `p_dog_3` is managed by `up_dog_4`. So here `up_dog_4` is managing `p_dog_3` which is previously allocated on the heap. This raw pointer should no longer be used. 

```cpp
Dog *p_dog_3 = new Dog("Dog3");
std::unique_ptr<Dog> up_dog_4{p_dog_3}; 
```

7. If you want, you can get the address as follows.

```cpp
up_int2.get()
```

8. We need to include the following

```cpp   
#include <memory>
```

9. asdfasdf

```txt
Integer lives at address : 0x21dce696e20
Hitting the outside scope
Destructor for dog Dog5 called
Destructor for dog Dog3 called

```

So with `{}` the destructor is automatically called.

```txt
Integer lives at address : 0x21dce696e20
Destructor for dog Dog5 called
Destructor for dog Dog3 called
Hitting the outside scope
```



10. 

## References
1. 



