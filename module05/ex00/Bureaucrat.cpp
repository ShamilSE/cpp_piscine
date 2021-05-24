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
std::string const &  Bureaucrat::getName() const {return _name;}



const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return "grade is too high";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return "grade is too low";
}

void	Bureaucrat::setGrade(size_t grade) {
	if (grade > _min_grade || grade < _max_grade)
		throw "ivalid grade";
	_grade = grade;
}

void	Bureaucrat::upRate() {

	if (_grade - 1 < _max_grade)
		throw GradeTooHighException();
	_grade--;
}

void	Bureaucrat::downRate() {
	if (_grade + 1 > _min_grade)
		throw GradeTooLowException();
	_grade++;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat & guy) {
	out << "name: " << guy.getName() << ", grade: " << guy.getGrade() << std::endl;
	return out;
}