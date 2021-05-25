#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
:
	Form("shrubbery", 145, 137)
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

const char*	ShrubberyCreationForm::OpenFileException::what() const throw() {
	return "can not open file";
}


void	ShrubberyCreationForm::execute(Bureaucrat const & executor) {
	Form::execute(executor);

	std::ofstream	out;
	std::ifstream	in;
	std::ostringstream	buf;
	std::string		content;

	in.open("tree");
	if (!in)
		throw OpenFileException();
	else {
		buf << in.rdbuf();
		content = buf.str();
		out.open(getName() + "_shrubbery");
		if (!out)
			throw OpenFileException();
		out << content << std::endl;
		in.close();
		out.close();
	}
}