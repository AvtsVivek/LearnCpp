#ifndef EXERCISE_H
#define EXERCISE_H
#include <string>

//YOUR CODE WILL GO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE

class Printer{
	public : 
	Printer(const std::string& color) : m_color(color){}

	std::string operator()(const std::string& msg) const{
		std::string tmp;
		tmp.append("[color: ").append(m_color);
		tmp.append(", message: ").append(msg);
		tmp.append("]");

		return tmp;

	}

	private : 
	 std::string m_color;
};


//YOUR CODE WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE


#endif // _EXERCISE_H
