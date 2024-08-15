# Auto

## Notes
1. We can instruct the compiler to generate the classes even if we do not have objects created. And so this is called explicit template creation. 
2. 
3. 
4. The compiler generates the instances based on the arguments you provide.
5. Template instances are put exactly where your template class statements are in your code
6. All memebers of the class tempalte are instantiated, regardless of wather they are used or not.
7. This feature is useful to debug your class template code. 
8. Do the following.
9. Go to https://cppinsights.io/
10. Go to the example, 416580-DefaultValuesForTemplateParameters, find the 

```cpp
#include <iostream>

template <typename T = int, size_t maximum = 10>
class BoxContainer
{
    // ...
}

// Explicit template instantiation
template class BoxContainer<double, 10>;
template class BoxContainer<std::string, 5>; 

int main()
{
    return 0;
}

```

11. Run in cppinsights.io and see. This will generate all of the methods, regardless of the class is used to create objects.

## References

1. 

