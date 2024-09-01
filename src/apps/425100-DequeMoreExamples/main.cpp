#include <iostream>
#include <deque>

class Item
{
public:
    Item() : m_var(0)
    {
        // std::cout << "Item default constructor called" << std::endl;
    }
    Item(int var) : m_var(var)
    {
        // std::cout << "Item constructor called for: " << m_var << std::endl;
    }

    Item(const Item &source) : m_var{source.m_var}
    {
        // std::cout << "Item copy constructor called for :" << m_var << std::endl;
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

    // Code4 : Modifiers
    std::cout << std::endl;

    std::cout << "clear : " << std::endl;
    print_collection(numbers_double_ended_queue);

    // Clear
    numbers_double_ended_queue.clear();

    std::cout << "numbers_double_ended_queue size after clear method is called: " << numbers_double_ended_queue.size() << std::endl;

    print_collection(numbers_double_ended_queue);

    numbers_double_ended_queue = {10, 20, 30, 40, 50, 60};

    std::cout << "after reassignment : " << std::endl;
    print_collection(numbers_double_ended_queue);

    // Insert : element inserted in front of it_pos
    std::cout << std::endl;
    std::cout << "insert : " << std::endl;
    auto it_pos = numbers_double_ended_queue.begin() + 2;

    print_collection(numbers_double_ended_queue);

    numbers_double_ended_queue.insert(it_pos, 300);
    print_collection(numbers_double_ended_queue);
    numbers_double_ended_queue.insert(it_pos, 400); // iterator it_pos moves as we add elements.
                                                    //  it_pos keeps pointing to same element
                                                    //  elements are inserted at position in front of it_pos
    print_collection(numbers_double_ended_queue);

    // Emplace
    std::cout << std::endl;
    std::cout << "emplace : " << std::endl;
    print_collection(numbers_double_ended_queue);

    auto it_item_pos = numbers_double_ended_queue.begin() + 2;
    numbers_double_ended_queue.emplace(it_item_pos, 45); // The parameters following the iterator
                                                         // are passed to a constructor of the type stored in
                                                         // the vector.
    print_collection(numbers_double_ended_queue);

    // Erase
    std::cout << std::endl;
    std::cout << "erase : " << std::endl;
    print_collection(numbers_double_ended_queue);

    numbers_double_ended_queue.erase(numbers_double_ended_queue.begin() + 4);

    print_collection(numbers_double_ended_queue);

    numbers_double_ended_queue.erase(numbers_double_ended_queue.begin() + 1, numbers_double_ended_queue.begin() + 4);

    print_collection(numbers_double_ended_queue);

    // Emplace_back
    std::cout << std::endl;
    std::cout << "emplace_back : " << std::endl;
    print_collection(numbers_double_ended_queue);

    numbers_double_ended_queue.emplace_back(10);
    numbers_double_ended_queue.emplace_back(11);
    numbers_double_ended_queue.emplace_back(12);

    print_collection(numbers_double_ended_queue);

    // Pop back
    std::cout << std::endl;
    std::cout << "pop_back : " << std::endl;
    print_collection(numbers_double_ended_queue);

    numbers_double_ended_queue.pop_back();
    print_collection(numbers_double_ended_queue);

    numbers_double_ended_queue.pop_back();
    print_collection(numbers_double_ended_queue);

    numbers_double_ended_queue.pop_back();
    print_collection(numbers_double_ended_queue);

    // Resize
    std::cout << std::endl;
    std::cout << "resize : " << std::endl;
    std::cout << " resize (Before) : " << std::endl;
    print_collection(numbers_double_ended_queue);
    std::cout << " numbers_double_ended_queue size : " << numbers_double_ended_queue.size() << std::endl;

    numbers_double_ended_queue.resize(30);

    print_collection(numbers_double_ended_queue);
    std::cout << " after resize : " << std::endl;
    std::cout << " numbers_double_ended_queue size : " << numbers_double_ended_queue.size() << std::endl;

    // Can even resize down
    numbers_double_ended_queue.resize(10);
    print_collection(numbers_double_ended_queue);

    // Swap
    std::cout << std::endl;
    std::cout << "swap : " << std::endl;

    std::deque<Item> other_items_double_ended_queue = {Item(100), Item(200), Item(300)};

    std::cout << "items_double_ended_queue : ";
    print_collection(items_double_ended_queue);

    std::cout << "other_items_double_ended_queue : ";
    print_collection(other_items_double_ended_queue);

    // items_double_ended_queue.swap(other_items_double_ended_queue);
    other_items_double_ended_queue.swap(items_double_ended_queue);

    std::cout << "after swap: " << std::endl;

    std::cout << "items_double_ended_queue: ";
    print_collection(items_double_ended_queue);

    std::cout << "other_items_double_ended_queue: ";
    print_collection(other_items_double_ended_queue);

    return 0;
}