#include <iostream>

/*  Function throws const char* exception when par_b is zero  */
void process_parameters(int par_a, int par_b)
{

    // Do some processing
    if (par_b == 0)
    {
        std::cout << "About to throw..." << std::endl;
        throw "Potential division by 0 detected";
    }
    int result = par_a / par_b;

    // Some other processing.
}

int main()
{

    // Exceptions thrown out of other parts of code written by you
    // or somebody else

    try
    {
        process_parameters(10, 0);
    }
    catch (const char *ex)
    {
        std::cout << "Exception: " << ex << std::endl;
    }

    std::cout << "Done!" << std::endl;

    return 0;
}