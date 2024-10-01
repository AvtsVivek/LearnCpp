#include <iostream>

// #include<array>

int main()
{

    // 1. Counting Each Element
    std::cout << "Counting Each Element----------- " << std::endl;

    int c;
    int arr_manual_counting[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    std::cout << "The array is: ";
    for (auto i : arr_manual_counting)
    {
        std::cout << i << " ";
        c++;
    }

    std::cout << "\nThe length of the given Array is: " << c << std::endl;

    std::cout << std::endl;

    // 2. Using begin() and end()
    std::cout << "Using begin() and end()----------- " << std::endl;

    int arr_begin_end[] = {11, 22, 33, 44};

    std::cout << "The Length of the Array is : " << std::end(arr_begin_end) - std::begin(arr_begin_end); // length

    std::cout << std::endl;

    // 3. Using sizeof() Function to Find Array Length in C++
    std::cout << "Using sizeof() Function to Find Array Length in C++----------- " << std::endl;

    int scores[]{1, 2, 5};

    int count{std::size(scores)}; // std::size( C++17)

    std::cout << "sizeof(scores) : " << sizeof(scores) << std::endl;
    std::cout << "sizeof(scores[0]) : " << sizeof(scores[0]) << std::endl;
    std::cout << "count : " << count << std::endl;
    std::cout << "std::size(scores) : " << std::size(scores) << std::endl;

    int array_length{sizeof(scores) / sizeof(scores[0])};

    std::cout << "sizeof(scores) / sizeof(scores[0]): " << array_length << std::endl;

    std::cout << std::endl;

    // 4. Using Pointers to Find Array Length in C++
    std::cout << "Using Pointers to Find Array Length in C++----------- " << std::endl;

    int arr_length_using_pointer[6] = {5, 4, 3, 2, 1, 0};
    int len_arr_length_using_pointer = *(&arr_length_using_pointer + 1) - arr_length_using_pointer;
    //*(&arr + 1) is the address of the next memory location
    // just after the last element of the array
    std::cout << "The length of the array is: " << len_arr_length_using_pointer;

    return 0;
}
