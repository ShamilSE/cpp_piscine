#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
:
	_name(name),
	_title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _title <<
	", is dead. Consequences will never be the same!" <<
	std::endl;
}

Sorcerer::Sorcerer(const Sorcerer & src) {
	this->_name = src._name;
	this->_title = src._title;
}

Sorcerer&	Sorcerer::operator=(const Sorcerer & src) {
	this->_name = src._name;
	this->_title = src._title;
	return *this;
}

std::string	Sorcerer::greetings() const{
	return "I am " + getName() + ", " + getTitle() + " and I like ponies!";
}

void	Sorcerer::polymorph(Victim const & src) const {
	src.getPolymorphed();
}

void	Sorcerer::polymorph(Peon const & src) const {
	src.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, const Sorcerer & src) {
	out << src.greetings() << std::endl;
	return out;
}

std::string	Sorcerer::getName() const {return _name;}
std::string	Sorcerer::getTitle() const {return _title;}
