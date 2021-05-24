#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM

#include "Form.hpp"

class	ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm(std::string name);
		ShrubberyCreationForm(const ShrubberyCreationForm & other);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm & other);
		~ShrubberyCreationForm() {};

		void	action(std::string target);
};

#endif