#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name)
:
	Form(name, 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other)
:
	Form(other.getName(), other.getGrade(), other.getExecuteGrade())
{
	*this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & other)
{
	(void)other;
	return *this;
}


void	ShrubberyCreationForm::action(std::string target) {
	std::ofstream	out;
	std::ifstream	in;
	std::ostringstream	buf;
	std::string		content;

	in.open("tree");
	if (!in)
		std::cout << "can't open file with tree";
	else {
		buf << in.rdbuf();
		content = buf.str();
		out.open(target + "_shrubbery");
		out << content << std::endl;
		in.close();
		out.close();
	}
}