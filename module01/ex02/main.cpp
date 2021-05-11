#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>

int	main(void) {
	ZombieEvent *zombie = new ZombieEvent;


	Zombie *z1 = zombie->randomChump();
	Zombie	*z2 = zombie->newZombie("Carl", "braineater");
	z1->announce();
	z2->announce();
	delete z1;
	delete z2;
	return 0;
}