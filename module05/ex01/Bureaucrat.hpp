#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include <string>
#include <iostream>
#include <exception>

class	Form;

class	Bureaucrat {
	private:
		size_t	_grade;
		static const size_t	_max_grade = 1;
		static const size_t	_min_grade = 150;
		const std::string	_name;
		Bureaucrat();

	public:
		Bureaucrat(std::string name);
		Bureaucrat(const Bureaucrat & other);
		Bureaucrat& operator=(const Bureaucrat & other);
		~Bureaucrat() {};

		size_t	getGrade() const;
		std::string const &  getName() const;
		void	setGrade(size_t grade);
		size_t	getMinGrade() const;
		size_t	getMaxGrade() const;

		void	upRate();
		void	downRate();


		void	signForm(Form & form);


		class	GradeTooLowException : public std::exception {
			const char* what() const throw();
		};
		class	GradeTooHighException : public std::exception {
			const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat & guy);

#endif