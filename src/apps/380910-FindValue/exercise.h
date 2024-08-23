#ifndef EXERCISE_H
#define EXERCISE_H

//YOUR CODE WILL GO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE
template <unsigned int collection_size ,typename T>
int find_value(T collection[] , T value )
{
    for(unsigned int i{ 0 }; i < collection_size; ++i) {
        if(value == collection[i])
            return i;
    }
    return -1;
}
//YOUR CODE WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE

#endif // _EXERCISE_H