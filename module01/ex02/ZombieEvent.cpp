#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <stdlib.h>

void	ZombieEvent::setZombieType(std::string type) {
	this->type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name, std::string type) {
	return new Zombie(name, type);
}

Zombie*	ZombieEvent::randomChump(void) {
	std::string names[10] = {"Rick", "Amanda", "Tyler", "Cris", "Cristina", "Rob", "Mike", "Anna", "John", "Chest"};

	int num = rand() % 10;
	Zombie*	random = this->newZombie(names[num], "random one");
	std::cout << "<" << random->getName() << " (" << random->getType() << ")> Braiiiiiiinnnssss..." << std::endl;
	return random;
}
