#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name): _name(name) {}

Bureaucrat::Bureaucrat(const Bureaucrat & other) {
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat & other) {
	_grade = other._grade;
	return *this;
}

size_t	Bureaucrat::getGrade() const {return _grade;}
size_t	Bureaucrat::getMaxGrade() const {return _max_grade;}
size_t	Bureaucrat::getMinGrade() const {return _min_grade;}
std::string const &  Bureaucrat::getName() const {return _name;}

void	Bureaucrat::GradeTooHighException() const {
	throw "grade is too high";
}

void	Bureaucrat::GradeTooLowException() const {
	throw "grade is too low";
}

void	Bureaucrat::setGrade(size_t grade) {
	if (grade > _min_grade && grade < _max_grade)
		throw "ivalid grade";
	_grade = grade;
}

void	Bureaucrat::upRate() {

	if (_grade - 1 < _max_grade)
		GradeTooHighException();
	_grade--;
}

void	Bureaucrat::downRate() {
	if (_grade + 1 > _min_grade)
		GradeTooLowException();
	_grade++;
}

void	Bureaucrat::signForm(Form & form) {
	if (_grade <= form.getGrade())
	{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName();
	}
	else {
		std::cout << _name << " cannot sign " << form.getName() <<
			" because beraucrat has too high or too low grade";
	}
	std::cout << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat & guy) {
	out << "name: " << guy.getName() << ", grade: " << guy.getGrade() << std::endl;
	return out;
}