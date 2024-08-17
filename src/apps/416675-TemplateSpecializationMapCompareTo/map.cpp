#include "map.h"

// Specializing get_max

//YOUR DEFINITION WILL GO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE

template<> 
bool Map<const char*>::compare_to( const Map& other) const {
		return (std::strcmp(m_key,other.m_key) == 0)
			&&(std::strcmp(m_value,other.m_value) == 0);
}

//YOUR DEFINITION WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE
