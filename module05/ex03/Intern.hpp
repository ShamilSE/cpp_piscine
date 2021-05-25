#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>
#include <exception>

class	Intern {
	private:
		Form*	form[3];

	public:
		Intern();
		Intern(const Intern & other);
		Intern& operator=(const Intern & other);
		~Intern() {}

		class NoSuchForm : public std::exception {
			const char* what() const throw();
		};

		Form*	makeForm(std::string const & form_name, std::string const & target);
};

#endif