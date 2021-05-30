#include "easyfind.hpp"

int	main(void) {
	std::vector<int>	a;
	a.push_back(4);
	a.push_back(5);

	//------------------------------------//
	try
	{
		easyfind(a, 4);
		std::cout << "found 4" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	//------------------------------------//
	try
	{
		easyfind(a, 7);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	//------------------------------------//
	return 0;
}