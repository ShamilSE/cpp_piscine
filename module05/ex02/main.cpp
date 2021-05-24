#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
	Form* passport = new ShrubberyCreationForm("passprot");

	passport->action("tree");
	return 0;
}