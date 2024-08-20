#ifndef EXERCISE_H
#define EXERCISE_H
#include <cstring>


template <typename T>
int hunt_down( T value,  T* collection, unsigned int size)
{
	for (unsigned int i{ 0 }; i < size; i++) {
		if (collection[i] == value) {
			return i; // Found it; return the index.
		}
	}
	return -1; 
}

//THE DECLARATION FOR YOUR TEMPLATE SEPCIALIZATION WILL GO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE

//Declaration : should show up in your exercise.h file
template <>
int hunt_down<const char*> (const char* value, const char** collection, unsigned int size);


//Definition : should show up in your exercise.cpp file
template <>
int hunt_down<const char*> (const char* value, const char** collection, unsigned int size)
{
	for (unsigned int i{ 0 }; i < size; i++) {
		if (strcmp(collection[i], value) == 0) {
			return i; // Found it; return the index.
		}
	}
	return -1; 
}

//THE DECLARATION FOR YOUR TEMPLATE SPECIALIZATION WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE

#endif // _EXERCISE_H

