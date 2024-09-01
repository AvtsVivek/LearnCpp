#include <iostream>
#include <deque>

class Item
{
public:
    Item() : m_var(0)
    {
        std::cout << "Item default constructor called" << std::endl;
    }
    Item(int var) : m_var(var)
    {
        std::cout << "Item constructor called for: " << m_var << std::endl;
    }

    Item(const Item &source) : m_var{source.m_var}
    {
        std::cout << "Item copy constructor called for :" << m_var << std::endl;
    }

    int get() const
    {
        return m_var;
    }

private:
    int m_var{0};
};

std::ostream &operator<<(std::ostream &out, const Item &item)
{
    out << "Item [ value : " << item.get() << "]";
    return out;
}

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

    // Creating deques
    std::deque<int> numbers_double_ended_queue = {1, 2, 3, 4, 5, 6};

    std::deque<Item> items_double_ended_queue{Item(22), Item(33), Item(44), Item(55)};

    std::cout << "numbers_double_ended_queue: ";
    print_collection(numbers_double_ended_queue);

    std::cout << "items_double_ended_queue: ";
    print_collection(items_double_ended_queue);

    // Code1 : Element access
    // Access elements : [], at(), front() and back()
    std::cout << std::endl;
    std::cout << "Element access : " << std::endl;
    std::cout << "numbers_double_ended_queue[3] : " << numbers_double_ended_queue[3] << std::endl;       // No bound check
    std::cout << "numbers_double_ended_queue.at(3) : " << numbers_double_ended_queue.at(3) << std::endl; // Bound check

    std::cout << "numbers_double_ended_queue[30] (Undefined behavior):" << numbers_double_ended_queue[30] << std::endl; // No bounds check, undefined behavior, junk value or even crash.
    // std::cout << "numbers_double_ended_queue.at(30) (throws expception): " << numbers_double_ended_queue.at(30) << std::endl;

    std::cout << "numbers_double_ended_queue.front() : " << numbers_double_ended_queue.front() << std::endl;
    std::cout << "numbers_double_ended_queue.back() :" << numbers_double_ended_queue.back() << std::endl;

    // Data method : Deque has no data method

    // Iterators
    std::cout << "-----------------------" << std::endl;

    std::cout << std::endl;
    std::cout << "Iterators : " << std::endl;
    // begin() and end()
    auto it = numbers_double_ended_queue.begin();

    std::cout << "Deque(With iterators) : [ ";
    while (it != numbers_double_ended_queue.end())
    {
        std::cout << " " << *it;
        ++it;
    }
    std::cout << " ]" << std::endl;

    // Reverse traversal with rbebin and rend

    auto it_reverse = numbers_double_ended_queue.rbegin(); // non const iterator

    std::cout << "Deque(Reverse traversal with iterators) : [ ";
    while (it_reverse != numbers_double_ended_queue.rend())
    {
        std::cout << " " << *it_reverse;
        ++it_reverse; // Increments towards the first element of the array.
    }
    std::cout << " ]" << std::endl;

    std::cout << "-----------------------" << std::endl;

    // Capacity
    std::cout << std::endl;
    std::cout << "capacity : " << std::endl;
    std::cout << "numbers_double_ended_queue size : " << numbers_double_ended_queue.size() << std::endl;
    std::cout << "numbers_double_ended_queue max_size : " << numbers_double_ended_queue.max_size() << std::endl;
    std::cout << std::boolalpha; // Force output of bool as true or false instead of 1 or 0
    std::cout << "numbers_double_ended_queue is empty : " << numbers_double_ended_queue.empty() << std::endl;

    std::deque<int> numbers_double_ended_empty_queue = {};

    std::cout << "numbers_double_ended_empty_queue is empty : " << numbers_double_ended_empty_queue.empty() << std::endl;

    std::cout << "numbers_double_ended_empty_queue size : " << numbers_double_ended_empty_queue.size() << std::endl;

    numbers_double_ended_empty_queue.push_back(20);
    numbers_double_ended_empty_queue.push_back(30);
    numbers_double_ended_empty_queue.push_front(10);

    std::cout << "after pushing 10, 20, 30 to a previously empty deque : " << std::endl;

    print_collection(numbers_double_ended_empty_queue);

    print_collection(numbers_double_ended_queue);

    numbers_double_ended_queue.push_back(20);
    std::cout << "after pushing 20 to back : " << std::endl;
    print_collection(numbers_double_ended_queue);
    std::cout << "numbers_double_ended_queue size : " << numbers_double_ended_queue.size() << std::endl;

    std::cout << "-----------------------" << std::endl;

    return 0;
}