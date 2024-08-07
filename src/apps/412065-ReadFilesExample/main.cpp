#include <iostream>
#include <string>
#include <fstream>
#include <exception>
#include <sstream>

void read_from_file(std::string_view filename, size_t size, int * data)
{
	std::ifstream fstrem_in{filename.data()}; // We may fail to open the file

	// We failed to open the file
	if (fstrem_in.fail())
	{

		// We failed to open the file: throw an exception.
		std::stringstream ss;
        ss << "Unable to open file " << filename ;
        throw std::runtime_error{ ss.str().c_str() };
    }

    
    int value;
    int index{};
    while (fstrem_in >> value) {
        data[index++] = value;
    }
    //Something might go wrong in the process of reading the file.
    if (!fstrem_in.eof()) {
        throw std::runtime_error{ "Couldn't read the file." };
    }

}

int main()
{


    int data[4]{};
    try
    {
        read_from_file("numbers.txt",std::size(data),data);
        for(auto i : data){
                std::cout << "value : " << i << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    std::cout << "END" << std::endl;

    return 0;
}