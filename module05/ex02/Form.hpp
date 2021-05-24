#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class	Bureaucrat;

class	Form {
	private:
		std::string	_name;
		size_t		_grade;
		size_t		_execute_grade;
		bool		_is_signed;

	public:
		Form(std::string name);
		Form(std::string name, size_t grade, size_t execute_grade);
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
		size_t	getExecuteGrade() const;
		void	setGrade(size_t grade);

		virtual void	action(std::string target) {(void)target;};

		void	beSigned(const Bureaucrat & clerk);
};

std::ostream& operator<<(std::ostream& out, const Form & form);

#endif