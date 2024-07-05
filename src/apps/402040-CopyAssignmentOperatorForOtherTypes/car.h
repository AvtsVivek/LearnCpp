#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>

class Car
{
public:
    Car() = default;
    Car(const std::string &color, int speed);
    ~Car();

    double get_speed() const
    {
        return m_speed;
    }
    std::string get_color() const
    {
        return m_color;
    }

private:
    std::string m_color;
    double m_speed;
};

inline std::ostream &operator<<(std::ostream &os, const Car &c)
{
    os << "Car [ Max Speed : " << c.get_speed() << ", color : " << c.get_color() << "]";
    return os;
}

#endif // CAR_H
