#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	Bureaucrat	tom("Tom");
	try {tom.setGrade(1);}
	catch (...) {}

	//---------------------------------//
	Form	passport("passport");
	passport.setGrade(5);
	try
	{
		passport.beSigned(tom);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	//---------------------------------//
	try {tom.setGrade(10);}
	catch (...) {}
	try
	{
		passport.beSigned(tom);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	//---------------------------------//
	try {tom.setGrade(0);}
	catch (const char* e) {
		std::cout << e << std::endl;
	}
	//---------------------------------//
	try {tom.setGrade(4);}
	catch(...) {}
	try
	{
		tom.signForm(passport);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	//---------------------------------//
	try {tom.setGrade(100);}
	catch (...) {}
	try
	{
		tom.signForm(passport);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what();
	}
	//---------------------------------//
	return 0;
}