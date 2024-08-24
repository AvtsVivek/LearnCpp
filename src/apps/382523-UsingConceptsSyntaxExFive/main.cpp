template <typename T>
T add_up( const T collection[] , unsigned int size)

// Need to add the following required concept.
// requires std::convertible_to<T, double>

{
    T sum{};
    for(unsigned int i{0} ; i < size ; ++i){
        sum += collection[i];
    }
    return sum;
}