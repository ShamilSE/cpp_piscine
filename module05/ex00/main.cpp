#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat	tom("Tom");

	//---------------------------------//
	tom.setGrade(50);
	try
	{
		tom.upRate();
		std::cout << tom.getGrade() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	//---------------------------------//
	tom.setGrade(1);
	try
	{
		tom.upRate();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	//---------------------------------//
	std::cout << tom;
	return 0;
}