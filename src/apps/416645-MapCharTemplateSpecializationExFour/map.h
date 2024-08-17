#include <iostream>
#include <cstring>
 
template <typename T>
struct Map
{
    T m_key;
    T m_value;
    Map(T key, T value)
     : m_key(key), m_value(value)
    {}
 
   // Method declaration
    bool compare_to( const Map& other) const;
   
    void print_info() const{
        std::cout << "map [";
        std:: cout << m_key << "," << m_value;
        std::cout << "]";
    }
    
};


//Method definition
template <typename T>
bool Map<T>::compare_to( const Map& other) const{
    return (m_key == other.m_key)&&(m_value == other.m_value);
}
 
 
//Template specialization 
template <>
struct Map <const char*>
{
    const char* m_key;
    const char* m_value;
    Map(const char* key, const char* value)
     : m_key(key), m_value(value)
    {}
 
    bool compare_to( const Map& other) const{
        return (std::strcmp(m_key,other.m_key) == 0)
            &&(std::strcmp(m_value,other.m_value) == 0);
    }
    void print_info() const{
            std::cout << "map [";
            std:: cout << m_key << "," << m_value;
            std::cout << "]";
    }
};


