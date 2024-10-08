#include <iostream>
#include <list>
#include <algorithm>

template <typename T>
void print_collection(const T &collection)
{

    auto it = collection.begin();

    std::cout << " Collection [";
    while (it != collection.end())
    {
        std::cout << " " << *it;
        ++it;
    }
    std::cout << "]" << std::endl;
}

int main()
{

    std::list<int> numbers = {11, 12, 13, 14, 15};

    // emplace front and back
    std::cout << std::endl;
    std::cout << "emplace front (333) and back (444) : " << std::endl;

    print_collection(numbers);

    numbers.emplace_front(333);
    numbers.emplace_back(444);

    print_collection(numbers);

    // resize : up or down
    std::cout << std::endl;
    std::cout << "resize : " << std::endl;

    print_collection(numbers);
    std::cout << " numbers size : " << numbers.size() << std::endl;

    numbers.resize(20);

    print_collection(numbers);
    std::cout << " numbers size : " << numbers.size() << std::endl;

    numbers.resize(3); // When you resize down, the elements are lost for good.
                       // if you resize up again,you won't get them back.

    print_collection(numbers);
    std::cout << " numbers size : " << numbers.size() << std::endl;

    numbers.resize(20);

    print_collection(numbers);
    std::cout << " numbers size : " << numbers.size() << std::endl;

    // swap
    std::cout << std::endl;
    std::cout << "swap : " << std::endl;

    std::list<int> other_numbers{200, 400, 600};

    std::cout << " numbers : ";
    print_collection(numbers);

    std::cout << " other_numbers :";
    print_collection(other_numbers);

    numbers.swap(other_numbers);

    std::cout << " numbers : ";
    print_collection(numbers);

    std::cout << " other_numbers :";
    print_collection(other_numbers);

    // Other operations
    std::cout << "---------------------" << std::endl;
    std::cout << "Other operations : " << std::endl;

    // Merge
    std::cout << std::endl;
    std::cout << "merge : " << std::endl;

    std::list<int> numbers1{1, 5, 6};
    std::list<int> numbers2{9, 2, 4};

    std::cout << " numbers1 : ";
    print_collection(numbers1);

    std::cout << " numbers2 : ";
    print_collection(numbers2);

    // merge
    numbers1.merge(numbers2);

    std::cout << " numbers1 : ";
    print_collection(numbers1);

    std::cout << " numbers2 : ";
    print_collection(numbers2);

    // splice : move elements from one collection to another
    //           numbers2 is moved into numbers1
    std::cout << std::endl;
    std::cout << "splice : " << std::endl;

    numbers1 = {1, 5, 6, 8, 3};
    numbers2 = {9, 2, 4, 7, 13, 11, 17};

    std::cout << " numbers1 : ";
    print_collection(numbers1);
    std::cout << " numbers2 : ";
    print_collection(numbers2);

    // Find the iterator you want to start splicing from
    auto it_splice = std::find(numbers1.begin(), numbers1.end(), 6);

    if (it_splice != numbers1.end())
        numbers1.splice(it_splice, numbers2);

    std::cout << " numbers1 : ";
    print_collection(numbers1);
    std::cout << " numbers2 : ";
    print_collection(numbers2);

    // Remove
    std::cout << std::endl;
    std::cout << "remove : " << std::endl;

    numbers = {1, 100, 2, 3, 10, 1, 11, -1, 12};

    print_collection(numbers);

    numbers.remove(1); // remove both elements equal to 1

    print_collection(numbers);

    // Remove predicate: Can be a function pointer, functor or lambda function.
    //  Will explore this in more details later in the chapter when we talk about algorithms.
    numbers.remove_if([](int n)
                      { return n > 10; });

    print_collection(numbers);

    // reverse
    std::cout << std::endl;
    std::cout << "reverse : " << std::endl;

    numbers = {1, 100, 2, 3, 10, 1, 11, -1, 12};

    print_collection(numbers);

    numbers.reverse();

    print_collection(numbers);

    // Unique : Remove contiguous duplicates
    std::cout << std::endl;
    std::cout << "unique : " << std::endl;

    numbers = {1, 100, 100, 2, 3, 10, 1, 11, 11, -1, 12, 10, 1};

    print_collection(numbers);

    numbers.unique();

    print_collection(numbers);

    // Sort
    std::cout << std::endl;
    std::cout << "sort : " << std::endl;

    print_collection(numbers);

    numbers.sort();

    print_collection(numbers);

    numbers.unique();

    print_collection(numbers);

    return 0;
}