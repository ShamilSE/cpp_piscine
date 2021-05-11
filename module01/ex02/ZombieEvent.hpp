#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <string>
#include <iostream>

class ZombieEvent {
	private:
		std::string	type;

	public:
		void	setZombieType(std::string type);
		Zombie*	newZombie(std::string name, std::string type);
		Zombie*	randomChump(void);
};

#endif