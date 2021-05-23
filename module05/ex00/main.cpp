#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat	tom("Tom");

	try {tom.setGrade(50);}
	catch (...) {}
	try
	{
		tom.upRate();
		std::cout << tom.getGrade() << std::endl;
	}
	catch (const char* error)
	{
		std::cerr << error << std::endl;
	}
	//---------------------------------//
	try {tom.setGrade(1);}
	catch (...) {}
	try
	{
		tom.upRate();
	}
	catch (const char* error)
	{
		std::cerr << error << std::endl;
	}
	//---------------------------------//
	try
	{
		tom.setGrade(0);
	}
	catch (const char* error)
	{
		std::cerr << error << std::endl;
	}
	return 0;
}