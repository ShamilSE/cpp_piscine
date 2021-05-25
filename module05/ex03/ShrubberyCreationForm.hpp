#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM

#include "Form.hpp"

class	ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm & other);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm & other);
		~ShrubberyCreationForm() {};

		class	OpenFileException : public std::exception {
			const char* what() const throw();
		};
		
		void	execute(Bureaucrat const & executor);
};

#endif