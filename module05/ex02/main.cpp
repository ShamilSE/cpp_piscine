#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) {
	Form *passport = new ShrubberyCreationForm("passport");
	Bureaucrat *fedor = new Bureaucrat("Fedor");

	//---------------------------------//
	try
	{
		passport->execute(*fedor);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	//---------------------------------//
	fedor->setGrade(5);
	try
	{
		passport->execute(*fedor);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	//---------------------------------//
	Form *form = new RobotomyRequestForm("form");
	try
	{
		fedor->signForm(*form);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	//---------------------------------//
	try
	{
		form->execute(*fedor);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	//---------------------------------//
	return 0;
}