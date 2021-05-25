#ifndef ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM

#include "Form.hpp"

class	RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm(const RobotomyRequestForm & other);
		RobotomyRequestForm& operator=(const RobotomyRequestForm & other);
		~RobotomyRequestForm() {};

		class	NotRobotomizedException : public std::exception {
			const char* what() const throw();
		};

		void	execute(Bureaucrat const & executor);
};

#endif