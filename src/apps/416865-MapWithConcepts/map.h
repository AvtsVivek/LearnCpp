
#include <iostream>
#include <concepts>

template <typename T, typename P>
requires  std::integral<T> && std::is_same_v<P,std::string>
struct Map
{
private : 
    friend std::ostream& operator<< <>  (std::ostream& out, const Map<T,P>& operand);
    T m_key;
    P m_value;
public : 
    Map(T key, P value)
     : m_key(key), m_value(value)
    {}
};


template < typename T, typename P> 
requires std::integral<T> && std::is_same_v<P,std::string>
 std::ostream& operator<<(std::ostream& out, const Map<T,P>& operand){

    out << "Map : [" << operand.m_key 
        << "," << operand.m_value << "]";
    return out;
}



