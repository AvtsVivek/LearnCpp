#include "Shapes.h"

int main()
{
    Shape *p_shape = new Circle(10, "Tiny circle");
    p_shape->draw(20);
    p_shape->go_round_and_round();
    delete p_shape;
    return 0;
}