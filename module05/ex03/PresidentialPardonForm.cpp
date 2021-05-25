#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
:
	Form("Presidential Pardon Form", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other) 
:
	Form(other.getName(), other.getGrade(), other.getExecuteGrade())
{
	*this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm & other) {
	(void)other;
	return *this;
}


void	PresidentialPardonForm::execute(Bureaucrat const & executor) {
	Form::execute(executor);

	std::cout << executor.getName() << " has been pardoned by " <<
		"Zafod Beeblebrox." << std::endl;
}