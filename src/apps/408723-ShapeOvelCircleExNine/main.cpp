#include "Shapes.h"

int main()
{
    Shape *p_shape = new Circle(10, "Tiny circle");
    p_shape->draw();
    delete p_shape;
    return 0;
}