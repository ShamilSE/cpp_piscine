#include "Form.hpp"

Form::Form(std::string name): _name(name), _is_signed(false) {}

Form::Form(const Form & other) {
	*this = other;
}

Form& Form::operator=(const Form & other) {
	_name = other._name;
	_is_signed = other._is_signed;
	_grade = other._grade;
	_execute_grade = other._execute_grade;
	return *this;
}

std::string	Form::getName() const {return _name;}
bool		Form::getIsSigned() const {return _is_signed;}
size_t		Form::getGrade() const {return _grade;}
void	Form::setGrade(size_t grade) {_grade = grade;}

const char* Form::GradeTooHighException::what() const throw() {
	return "grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "grade is too low";
}

void	Form::beSigned(const Bureaucrat & clerk) {
	if (clerk.getGrade() <= getGrade() && clerk.getGrade() > 0)
		_is_signed = true;
	else {
		if (clerk.getGrade() < clerk.getMinGrade() && clerk.getGrade() > _grade)
			throw GradeTooLowException();
		else
			throw GradeTooHighException();
	}
}

std::ostream& operator<<(std::ostream & out, const Form & form) {
	out << "form name: " << form.getName() << 
		" form grade requirement is: " << form.getGrade();
	return out;
}