#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

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

		void	upRate();
		void	downRate();
		void	GradeTooLowException() const;
		void	GradeTooHighException() const;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat & guy);

#endif