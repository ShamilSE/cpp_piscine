#include "Array.hpp"

int main(void) {
	// test deep copying
	// test returned item by index
	// exception test
	//------------------------------//
	Array<int>	array(3);
	Array<char>	array3(3);
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	Array<int> array1(array);

	std::cout << array1[0] << std::endl;
	std::cout << array1[1] << std::endl;
	std::cout << array1[2] << std::endl;
	array[0] = 6;
	std::cout << array1[0] << std::endl;
	//------------------------------//
	try
	{
		array[5];
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	//------------------------------//
	return 0;
}
