#include <iostream>
#include <fstream>
#include <exception>
#include <string_view>
using namespace std;

void read_from_file(std::string_view filename, size_t size, int *data)
{
	std::ifstream fstrem_in{filename.data()}; // We may fail to open the file

	// We failed to open the file
	if (fstrem_in.fail())
	{

		// We failed to open the file: throw an exception.
		std::string fail_info = "Failed to open the file: " + static_cast<std::string>(filename);
		throw std::exception(fail_info);
	}

	int value;
	int index{};

	while (fstrem_in >> value)
	{
		data[index++] = value;
	}

	// Something might go wrong in the process of reading the file.
}

int main()
{

	int data[4]{};

	try
	{
		read_from_file("numberss.txt", std::size(data), data);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
		std::cout << "END with exception." << std::endl;
		return 1;
	}

	for (auto i : data)
	{
		std::cout << "value : " << i << std::endl;
	}

	std::cout << "END." << std::endl;
	return 0;
}