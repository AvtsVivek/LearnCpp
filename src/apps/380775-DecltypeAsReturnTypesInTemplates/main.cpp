#include <iostream>

// Declaration
template <typename T, typename P>
decltype((a > b) ? a : b) maximum(T a, P b); 


int main()
{
    return 0;
}

// // Definition
// template <typename T, typename P>
// decltype((a > b) ? a : b) maximum(T a, P b)
// {
//     return (a > b) ? a : b;
// }