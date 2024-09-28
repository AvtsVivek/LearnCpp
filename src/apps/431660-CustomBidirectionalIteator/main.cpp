#include <iostream>
#include <algorithm>
#include <vector>
#include "boxcontainer.h"

int main()
{

    BoxContainer<int> box1;
    box1.add(5);
    box1.add(1);
    box1.add(4);
    box1.add(8);
    box1.add(5);
    box1.add(3);
    box1.add(7);
    box1.add(9);
    box1.add(6);

    std::cout << box1;

    std::cout << std::endl;

    std::cout << "box1-reverse Manual: ";
    for (auto it = box1.end(); it != box1.begin();)
    {
        std::cout << *(--it) << " ";
    }

    std::cout << std::endl;

    std::ranges::reverse(box1);

    std::cout << "box1 reversing using ranges reverse : " << std::endl; 

    std::cout << box1 << std::endl;

    std::reverse(box1.begin(), box1.end());

    std::cout << "box1 reversing using std reverse : " << std::endl; 

    std::cout << box1 << std::endl;



    return 0;
}