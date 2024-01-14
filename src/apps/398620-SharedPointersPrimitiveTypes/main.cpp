#include <iostream>
#include <memory>

int main()
{

    // shared pointers to fundamental types
    {

        int var = 20;

        // declare pointer variable
        int *ptr_one;
        int *ptr_two;

        // note that data type of ptr and var must be same
        ptr_one = &var;
        ptr_two = &var;

        // assign the address of a variable to a pointer
        std::cout << "Value at ptr_one = " << ptr_one << "\n";
        std::cout << "Value at var = " << var << "\n";
        std::cout << "Value at *ptr_one = " << *ptr_one << "\n";

        std::cout << "Value at ptr_two = " << ptr_two << "\n";
        std::cout << "Value at var = " << var << "\n";
        std::cout << "Value at *ptr_two = " << *ptr_two << "\n";

        std::shared_ptr<int> int_ptr_1{new int{20}};

        std::cout << "The pointed to value(*int_ptr_1) is : " << *int_ptr_1 << std::endl;
        std::cout << "The pointer is (int_ptr_1) is : " << int_ptr_1 << std::endl;

        *int_ptr_1 = 40; // Use the pointer to assign

        std::cout << "The pointed to value is : " << *int_ptr_1 << std::endl;
        std::cout << "Use count : " << int_ptr_1.use_count() << std::endl; // 1

        std::cout << "----" << std::endl;

        // Copying

        std::shared_ptr<int> int_ptr_2 = int_ptr_1; // Use count : 2

        std::cout << "The pointed to value is (through int_ptr2)  : " << *int_ptr_2 << std::endl;
        std::cout << "The pointed to value is (through int_ptr1)  : " << *int_ptr_1 << std::endl;

        std::cout << "The pointer2 int_ptr2  : " << int_ptr_2 << std::endl;
        std::cout << "The pointer1 int_ptr1  : " << int_ptr_1 << std::endl;

        *int_ptr_2 = 70;

        std::cout << "The pointed to value is (through int_ptr2) : " << *int_ptr_2 << std::endl;
        std::cout << "The pointed to value is (through int_ptr1) : " << *int_ptr_1 << std::endl;

        std::cout << "Use count for int_ptr_1 : " << int_ptr_1.use_count() << std::endl;
        std::cout << "Use count for int_ptr_2 : " << int_ptr_2.use_count() << std::endl;

        std::shared_ptr<int> int_ptr_3; // nullptr
        int_ptr_3 = int_ptr_2;          // Use count : 3

        std::shared_ptr<int> int_ptr_4{nullptr};
        int_ptr_4 = int_ptr_3; // Use count : 4

        std::shared_ptr<int> int_ptr_5{int_ptr_4}; // Use count : 5

        std::cout << "Use count for int_ptr_1 : " << int_ptr_1.use_count() << std::endl;
        std::cout << "Use count for int_ptr_2 : " << int_ptr_2.use_count() << std::endl;
        std::cout << "Use count for int_ptr_3 : " << int_ptr_3.use_count() << std::endl;
        std::cout << "Use count for int_ptr_4 : " << int_ptr_4.use_count() << std::endl;
        std::cout << "Use count for int_ptr_5 : " << int_ptr_5.use_count() << std::endl;

        int_ptr_5.reset(); // decrements reference count and sets int_ptr5 to nullptr

        std::cout << "" << std::endl;

        std::cout << "After reset : int_ptr_5.reset() " << std::endl;

        std::cout << "" << std::endl;

        std::cout << "Use count for int_ptr_1 : " << int_ptr_1.use_count() << std::endl;
        std::cout << "Use count for int_ptr_2 : " << int_ptr_2.use_count() << std::endl;
        std::cout << "Use count for int_ptr_3 : " << int_ptr_3.use_count() << std::endl;
        std::cout << "Use count for int_ptr_4 : " << int_ptr_4.use_count() << std::endl;
        std::cout << "Use count for int_ptr_5 : " << int_ptr_5.use_count() << std::endl;

        if (int_ptr_5)
        {
            std::cout << "int_ptr5 pointing to something valid" << std::endl;
        }
        else
        {
            std::cout << "int_ptr5 pointing to nullptr" << std::endl;
        }
    }

    return 0;
}