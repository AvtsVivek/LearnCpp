#include <iostream>
#include <memory>

class Box
{
public:
    // methods
    Box() = default;

    Box(double width, double length, double height)
        : m_width(width), m_length(length), m_height(height)
    {
        std::cout << "Box object constructed" << std::endl;
    }
    ~Box()
    {
        std::cout << "Box object destroyed" << std::endl;
    }

    double base_area() const
    {
        return m_width * m_length;
    }
    double volume() const
    {
        return base_area() * m_height;
    }

    // member variables
private:
    double m_width{1};
    double m_length{1};
    double m_height{1};
};

int main()
{

    // Box *p_box = new Box(1, 2, 3);
    // std::cout << "volume : " << p_box->volume() << std::endl;
    // // delete p_box;
    // return 0;

    std::unique_ptr<Box> p_box = std::make_unique<Box>(1,2,3);
    std::cout << "volume : " << p_box->volume() << std::endl;
    return 0;

}