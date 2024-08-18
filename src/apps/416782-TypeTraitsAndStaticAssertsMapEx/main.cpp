#include <iostream>

template <typename T, typename P>
class Map;

template <typename T, typename P>
std::ostream &operator<<(std::ostream &, const Map<T, P> &);

template <typename T, typename P>
struct Map
{
private:
    // Necessary static asserts
    static_assert(std::is_integral_v<T>, "Keys can only be of integral type");
    static_assert(std::is_same_v<P, std::string>, "Values can only be of std::string type");

    friend std::ostream &operator<< <T, P>(std::ostream &, const Map<T, P> &);

    T m_key;
    P m_value;

public:
    Map(T key, P value) : m_key(key), m_value(value)
    {
    }
};

template <typename T, typename P>
inline std::ostream &operator<<(std::ostream &out, const Map<T, P> &operand)
{

    out << "Map : [" << operand.m_key
        << "," << operand.m_value << "]";
    return out;
};

int main()
{
    Map<int, std::string> m1(11222,std::string{"Vivek Koppula"}); // Works
    Map<long int,std::string> m2(22333,"Vivek Koppula"); // Works - Compiler inserts conversion because of explicit arguments
    Map<double, unsigned int> m3(22.1, 44555); // Fails to compile and throws good errors
    std::cout << m2 << std::endl;

    return 0;
}