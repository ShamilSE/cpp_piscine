#include "Human.hpp"

std::string	Human::identify(void) {return this->brain.identify();}

Brain&		Human::getBrain(void) {
	Brain&	brain_ref = this->brain;
	return brain_ref;
}