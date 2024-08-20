#include <iostream>
#include <cstring>
#include "huntdown.h"

int main()
{

	unsigned int student_id{817612};
	unsigned int student_ids[]{111222, 442222, 817616, 333900};
	int index = hunt_down(student_id, student_ids, 4); // -1 is returned and stored in index
	std::cout << index << std::endl;
	student_id = 442222;
	index = hunt_down(student_id, student_ids, 4); // -1 is returned and stored in index
	std::cout << index << std::endl;
	student_id = 111222;
	index = hunt_down(student_id, student_ids, 4); // -1 is returned and stored in index
	std::cout << index << std::endl;
}