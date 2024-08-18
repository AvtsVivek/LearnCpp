#include <iostream>
#include "templateclass.h"


int main()
{

    TemplateClass<int> object1;
    object1.set_up(10);

    TemplateClass<double> object2;
    object2.set_up(12.2);

    some_func(object1);
    some_func(object2);

    return 0;
}