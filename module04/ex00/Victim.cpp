#include "Victim.hpp"

Victim::Victim(std::string name): _name(name) {
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim & src) {
	this->_name = src._name;
}

Victim& Victim::operator=(const Victim & src) {
	this->_name = src._name;
	return *this;
}

Victim::~Victim() {
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

std::string	Victim::getName() const {return _name;}

std::string	Victim::greetings() const{
	return "I'm " + getName() + " and I like otters!"; 
}

void	Victim::getPolymorphed() const{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream&	operator<<(std::ostream& out, const Victim & src) {
	out << src.greetings() << std::endl;
	return out;
}