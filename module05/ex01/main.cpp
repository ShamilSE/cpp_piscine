#include "Bureaucrat.hpp"

int main(void) {
	// tests for signing
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
	catch (const char* error)
	{
		std::cout << error << std::endl;
	}
	//---------------------------------//
	try {tom.setGrade(10);}
	catch (...) {}
	try
	{
		passport.beSigned(tom);
	}
	catch (const char* error)
	{
		std::cout << error << std::endl;
	}
	//---------------------------------//
	try {tom.setGrade(0);}
	catch (...) {}
	try
	{
		passport.beSigned(tom);
	}
	catch (const char* error)
	{
		std::cout << error << std::endl;
	}
	return 0;
}