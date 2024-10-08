#include <iostream>
#include <string>

class ComparableString
{
public:
    ComparableString(const std::string &str) : m_str{str} {}

    std::weak_ordering operator<=>(const ComparableString &right_side) const
    {

        if (m_str.size() == right_side.m_str.size())
        {
            return std::weak_ordering::equivalent;
        }
        else if (m_str.size() > right_side.m_str.size())
        {
            return std::weak_ordering::greater;
        }
        else
        {
            return std::weak_ordering::less;
        }
    }

    bool operator==(const ComparableString &right_side) const
    {
        std::cout << "From Equals Equals operator: " << std::endl;
        // std::cout << "From Equals Equals operator: ";
        return (m_str.size() == right_side.m_str.size());
    }

private:
    std::string m_str;
};