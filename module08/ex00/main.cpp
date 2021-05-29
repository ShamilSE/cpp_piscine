#include "easyfind.hpp"

int	main(void) {
	int	a[5] = {1, 2, 3, 4,5};

	//------------------------------------//
	try
	{
		easyfind(a, 7);
	}
	catch (const char* e)
	{
		std::cerr << e << std::endl;
	}
	//------------------------------------//
	try
	{
		easyfind(a, 4);
	}
	catch (const char* e)
	{
		std::cerr << e << std::endl;
	}
	//------------------------------------//
	return 0;
}