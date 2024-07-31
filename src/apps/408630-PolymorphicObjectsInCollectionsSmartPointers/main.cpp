#include <iostream>
#include <memory>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main()
{

    Circle circle1(7.2, "circle1");
    Oval oval1(13.3, 1.2, "Oval1");
    Circle circle2(11.2, "circle2");
    Oval oval2(31.3, 15.2, "Oval2");
    Circle circle3(12.2, "circle3");
    Oval oval3(53.3, 9.2, "Oval3");

    // Smart pointers
    std::shared_ptr<Shape> shapes4[]{std::make_shared<Circle>(12.2, "Circle4"),
                                     std::make_shared<Oval>(10.0, 20.0, "Oval4")};
    for (auto &s : shapes4)
    {
        s->draw();
    }

    return 0;
}