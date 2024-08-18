#include <iostream>

template <typename T, typename P>
class Map;
template <typename T, typename P>
std::ostream &operator<<(std::ostream &, const Map<T, P> &);

template <typename T, typename P>
struct Map
{
private:
    friend std::ostream &operator<< <T, P>(std::ostream &, const Map<T, P> &);

    T m_key;
    P m_value;

public:
    Map(T key, P value)
        : m_key(key), m_value(value)
    {
    };
};

template <typename T, typename P>
inline std::ostream &operator<<(std::ostream &out, const Map<T, P> &operand)
{

    out << "Map : [" << operand.m_key
        << "," << operand.m_value << "]";
    return out;
};
