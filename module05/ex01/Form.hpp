#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class	Bureaucrat;

class	Form {
	private:
		size_t		_grade;
		std::string	_name;
		bool		_is_signed;

	public:
		Form(std::string name);
		Form(const Form & other);
		Form& operator=(const Form & other);
		~Form() {};

		class	GradeTooHighException : public std::exception {
			const char* what() const throw();
		};
		class	GradeTooLowException: public std::exception {
			const char* what() const throw();
		};

		std::string	getName() const;
		bool	getIsSigned() const;
		size_t	getGrade() const;
		void	setGrade(size_t grade);

		void	beSigned(const Bureaucrat & clerk);
};

std::ostream& operator<<(std::ostream& out, const Form & form);

#endif