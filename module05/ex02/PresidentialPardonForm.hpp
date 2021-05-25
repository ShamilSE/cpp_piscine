#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "Form.hpp"

class	PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm & other);
		PresidentialPardonForm& operator=(const PresidentialPardonForm & other);
		~PresidentialPardonForm() {}

		void	execute(Bureaucrat const & executor);
};

#endif