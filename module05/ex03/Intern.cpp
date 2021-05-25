#include "Intern.hpp"

Intern::Intern() {
	form[0] = new ShrubberyCreationForm;
	form[1] = new RobotomyRequestForm;
	form[2] = new PresidentialPardonForm;
}

Intern::Intern(const Intern & other) {
	*this = other;
}

Intern& Intern::operator=(const Intern & other) {
	(void)other;
	return *this;
}

const char* Intern::NoSuchForm::what() const throw() {
	return "no such form in form pool! use another name";
}

Form*	Intern::makeForm(std::string const & form_name, std::string const & target) {
	(void)target;
	for (int i = 0; i < 3; i++) {
		if (form_name == form[i]->getName())
		{
			std::cout << "Intern creates " << form_name << std::endl;
			return form[i];
		}
	}
	throw NoSuchForm();
}