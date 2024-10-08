#include <iostream>
#include <string>


std::weak_ordering case_insensitive_compare(const char* str1, const char* str2) {

    //Turn them all to uppercase
    std::string string1(str1);
    std::string string2(str2);

    for (auto& c : string1) {
        c = toupper(c);
    }

    for (auto& c : string2) {
        c = toupper(c);
    }

    int cmp = string1.compare(string2);
    if (cmp > 0)
        return std::weak_ordering::greater;
    else if (cmp == 0)
        return std::weak_ordering::equivalent;
    else
        return std::weak_ordering::less;
}

class CaseInsensitiveString {
public:
    CaseInsensitiveString(const std::string& str)
        : s(str)
    {
    }
    std::weak_ordering operator<=>(const CaseInsensitiveString& b) const {
        return case_insensitive_compare(s.c_str(), b.s.c_str());
    }
    std::weak_ordering operator<=>(const char* b) const {
        return case_insensitive_compare(s.c_str(), b);
    }
	
	bool operator==(const CaseInsensitiveString& right_operand)const{
		return (case_insensitive_compare(s.c_str(),right_operand.s.c_str())
				== std::weak_ordering::equivalent)? true : false;
	}

private:
    std::string s;
};
