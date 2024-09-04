#include <iostream>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

template <typename T>
void show_collection(const T &collection)
{

    std::cout << " [";
    for (const auto &elt : collection)
    {
        std::cout << " " << elt;
    }
    std::cout << "]" << std::endl;
}

template <typename T>
void show_map_collection(const T &collection)
{

    std::cout << " [";
    for (const auto &[key, value] : collection)
    {
        std::cout << " (" << key << "," << value << ")";
    }
    std::cout << "]" << std::endl;
}

int main()
{

    std::set<int> collection1_ordered{11, 16, 2, 912, 15, 6, 15, 2};
    std::unordered_set<int> collection1_unordered{11, 16, 2, 912, 15, 6, 15, 2};

    std::map<int, int> collection2_ordered{{1, 11}, {0, 12}, {4, 13}, {2, 14}, {3, 15}};
    std::unordered_map<int, int> collection2_unordered{{1, 11}, {0, 12}, {4, 13}, {2, 14}, {3, 15}};

    std::cout << "collection1_ordered : ";
    show_collection(collection1_ordered);

    std::cout << "collection1_UNordered : ";
    show_collection(collection1_unordered);

    std::cout << "collection2_ordered : ";
    show_map_collection(collection2_ordered);

    std::cout << "collection2_UNordered : ";
    show_map_collection(collection2_unordered);

    // The operations are mostly similar to std::set and std::map . The details
    // can be checked in your favorite C++ standard library reference manual

    return 0;
}