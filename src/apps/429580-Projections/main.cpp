#include <iostream>
#include <algorithm>
#include <vector>
#include "point.h"

template <typename T>
void print_collection(const T &collection)
{

    std::cout << " Collection [";
    for (const auto &elt : collection)
    {
        std::cout << " " << elt;
    }
    std::cout << "]" << std::endl;
}

int main()
{

    // Projections : usually the sorting is done based on operator<
    // but you get one chance to write operator <
    // sometimes you want to sort things based on another scheme or
    // member variable other than the one used by operator<
    // You can do that with projections. For example, sorting based on y
    //  for Point can be achieved with a y projection as shown in this example

    std::cout << std::endl;
    std::cout << "Here are the points. : " << std::endl;
    std::vector<Point> points{{10, 90}, {30, 70}, {20, 80}};
    print_collection(points);

    std::cout << "Sorting points (default ascending: based on length) : " << std::endl;

    // Sorting with the default comparator(less)
    std::ranges::sort(points, std::less<>{}); // Default sort based on distance
    print_collection(points);

    std::cout << "Sorting points (default descending: based on length) : " << std::endl;

    // Sorting with the greater comparator
    std::ranges::sort(points, std::greater<>{}); // Default sort based on distance
    print_collection(points);

    // Sorting with a projection : The data is passed into the projection before
    // it's passed into the comparator. std::less<> is going to compare two doubles
    // instead of comparing two Points.
    std::cout << std::endl;
    std::cout << "projection on Point::m_x : " << std::endl;
    print_collection(points);
    std::ranges::sort(points, std::less<>{}, [](auto const &p)
                      { return p.m_x; });
    print_collection(points);

    // Projecting with direct member variable
    std::cout << std::endl;
    std::cout << "projection on Point::m_y with direct member variables : " << std::endl;
    print_collection(points);
    std::ranges::sort(points, std::less<>{}, &Point::m_y);
    print_collection(points);

    // Projections with for_each
    std::cout << std::endl;
    std::cout << "Projections with for_each : " << std::endl;

    auto print = [](const auto &n)
    { std::cout << " " << n; };
    using pair = std::pair<int, std::string>;
    std::vector<pair> pairs{{1, "one"}, {2, "two"}, {3, "tree"}};

    std::cout << "project the pair::first: ";
    std::ranges::for_each(pairs, print, [](const pair &p)
                          { return p.first; });
    std::cout << std::endl;

    std::cout << "project the pair::first: ";
    std::ranges::for_each(pairs, print, &pair::first);
    std::cout << std::endl;

    std::cout << "project the pair::second: ";
    std::ranges::for_each(pairs, print, [](const pair &p)
                          { return p.second; });
    std::cout << std::endl;

    return 0;
}