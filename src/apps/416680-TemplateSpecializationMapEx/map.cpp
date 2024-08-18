#include <cstring>
#include "map.h"

template <>
inline bool Map<const char *>::compare_to(const Map &other) const
{
	return (std::strcmp(m_key, other.m_key) == 0) && (std::strcmp(m_value, other.m_value) == 0);
}
