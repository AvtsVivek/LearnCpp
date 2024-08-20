#ifndef EXERCISE_H
#define EXERCISE_H

template <typename T>
int hunt_down(const T& value, const T* collection, unsigned int size)
{
	for (unsigned int i{ 0 }; i < size; i++) {
		if (collection[i] == value) {
			return i; // Found it; return the index.
		}
	}
	return -1; 
}


int hunt_down(const char* value, const char** arr, unsigned int size);

#endif // _EXERCISE_H