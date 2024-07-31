#include "Shapes.h"

int main()
{
    Circle *p_circle = new Circle(10, "Tiny circle");
    p_circle->draw(20);
    delete p_circle;
    return 0;
}