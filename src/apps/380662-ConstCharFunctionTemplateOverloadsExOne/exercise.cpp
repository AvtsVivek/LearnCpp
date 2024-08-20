#include "exercise.h"
#include <cstring>

//Definition

int hunt_down(const char* value, const char** arr, unsigned int size)
{
	for (unsigned int i{ 0 }; i < size; i++) {
		if (strcmp(arr[i], value) == 0) {
			return i; // Found it; return the index.
		}
	}
	return -1; 
}

