import <iostream>;
import math;

int main()
{
    auto result = add(10, 20);
    std::cout << "Adding two numbers 10 and 20: " << result << std::endl;

    auto result_sub = sub(250, 20);
    std::cout << "Subtracting 20 from 250: " << result_sub << std::endl;

    auto result_mult = mult(10, 40);
    std::cout << "Multiplying Two numbers 10 and 40: " << result_mult << std::endl;

    auto result_div = divnumbers(10, 40);
    std::cout << "Dividing 10 by 40: " << result_div << std::endl;

}