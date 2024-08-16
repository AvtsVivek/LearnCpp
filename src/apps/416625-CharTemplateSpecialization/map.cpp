#include <cstring>
#include "map.h"

//Constructor
Map<const char*>::Map(const char* key, const char* value)
	 : m_key(key), m_value(value)
{}

bool Map<const char*>::compare_to( const Map& other) const{
		return (std::strcmp(m_key,other.m_key) == 0)
			&&(std::strcmp(m_value,other.m_value) == 0);
}
void Map<const char*>::print_info() const{
		std::cout << "map [";
		std:: cout << m_key << "," << m_value;
		std::cout << "]";
}
