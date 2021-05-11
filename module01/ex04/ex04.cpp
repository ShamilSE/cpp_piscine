#include <string>
#include <iostream>

int	main(void) {
	std::string brain = "HI THIS IS BRAIN";
	std::string* brain_pointer = &brain;
	std::string& brain_reference = brain;

	std::cout << *brain_pointer << std::endl;
	std::cout << brain_reference << std::endl;
}
