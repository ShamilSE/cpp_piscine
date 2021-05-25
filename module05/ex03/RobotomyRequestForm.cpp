#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string name)
:
	Form(name, 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & other)
:
	Form(other.getName(), other.getGrade(), other.getExecuteGrade())
{
	*this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm & other) {
	(void)other;
	return *this;
}

const char* RobotomyRequestForm::NotRobotomizedException::what() const throw() {
	return "robotomizing failed";
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) {
	Form::execute(executor);
	
	std::cout << "..... trying to robotomize " << getName() <<
		" with 50% chance" << std::endl;
	
	srand(time(NULL));
	if ((rand() % 100) > 50)
		throw NotRobotomizedException();

	std::cout << getName() << " robotomized successfully" << std::endl;
}