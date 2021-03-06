#include "Form.hpp"

Form::Form(std::string name): _name(name) {}

Form::Form(std::string name, size_t grade, size_t execute_grade)
:
	_name(name),
	_grade(grade),
	_execute_grade(execute_grade),
	_is_signed(false)
{}

Form::Form(const Form & other) {
	*this = other;
}

Form& Form::operator=(const Form & other) {
	_name = other._name;
	_is_signed = other._is_signed;
	return *this;
}

std::string	Form::getName() const {return _name;}
bool		Form::getIsSigned() const {return _is_signed;}
size_t		Form::getGrade() const {return _grade;}
size_t		Form::getExecuteGrade() const {return _execute_grade;}
void	Form::setGrade(size_t grade) {_grade = grade;}

const char* Form::GradeTooHighException::what() const throw() {
	return "grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "grade is too low";
}

const char*	Form::FormNotSigned::what() const throw() {
	return "form not signed";
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

void	Form::execute(Bureaucrat const & executor) {
	if (executor.getGrade() > _grade)
		throw GradeTooLowException();
	if (!getIsSigned())
		throw FormNotSigned();
}