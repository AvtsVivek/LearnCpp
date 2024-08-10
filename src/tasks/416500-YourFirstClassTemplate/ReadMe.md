# Auto

## Notes
1. Class templates are like generics in C#

2. The definitions should show up in the header file.

3. All member function definitions moved into the header file, the compiler needs to see them there to generate proper template instances

4. Operator << set up as a non friend free standing global function. At the moment we dont have anough tools to deal with problems that could pop up if we used our good StreamInsertable interface which befriends global operator <<

5. Operator << is no longer a friend, so it will access BoxContainer private data through public helper getter methods.

6. A template is only instantiated once. It is reused every time the type is needed in your code.

7. Also, all the class memebers are in line by default, so we are safe from ODR issue, if the template heade is included in many files.

## cpp insights.

1. Go to, https://cppinsights.io/

2. Paste the code in the source.

```cpp
#include <iostream>

template <typename T>
class BoxContainer
{

}
...

// Till the end of the `boxcontainer.h` file

int main()
{
	// int
	std::cout << "BoxContainer of int : " << std::endl;
	BoxContainer<int> int_box;
	int_box.add(33);
	int_box.add(44);
	std::cout << "int_box : " << int_box << std::endl;
}
```

## References

1. 

