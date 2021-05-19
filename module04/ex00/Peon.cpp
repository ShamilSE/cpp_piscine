#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon & src): Victim(src._name) {
	this->_name = src._name;
}

Peon& Peon::operator=(const Peon & src) {
	Victim(src._name);
	return *this;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed() const{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}

std::ostream&	operator<<(std::ostream& out, const Peon & src) {
	out << src.greetings() << std::endl;
	return out;
}