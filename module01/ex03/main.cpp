#include "ZombieHorde.hpp"
#include <string.h>
#include <iostream>

int	main(void) {
	ZombieHorde	*horde = new ZombieHorde(5);
	horde->announce();
	delete horde;
}