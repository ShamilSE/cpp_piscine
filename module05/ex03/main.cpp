#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include <exception>

int main(void) {
	Intern fedor;

	Form* passport;
	//---------------------------------//
	try
	{
		passport = fedor.makeForm("robotom2y", "2");
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	//---------------------------------//
	try
	{
		passport = fedor.makeForm("robotom2y", "2");
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	//---------------------------------//
	return 0;
}