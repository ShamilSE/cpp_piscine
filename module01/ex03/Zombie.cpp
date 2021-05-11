#include "Zombie.hpp"

// Zombie::Zombie(std::string name, std::string type) {
// 	this->name = name;
// 	this->type = type;
// }

std::string	Zombie::getType(void) {return this->type;}
std::string	Zombie::getName(void) {return this->name;}

void		Zombie::setType(std::string type) {this->type = type;}
void		Zombie::setName(std::string name) {this->name = name;}

void		Zombie::announce(void) {
	std::cout << "<" << this->name << " (" << this->type << ")>";
	std::cout << "> Braiiiiiiinnnssss..." << std::endl;
}

void		Zombie::setRandomName(void) {
	std::string names[10] = {"Rick", "Amanda", "Tyler", "Cris", "Cristina", "Rob", "Mike", "Anna", "John", "Chest"};
	int random_num = rand() % 10;
	this->name = names[random_num];
	this->type = "braineater";
}