#include "ZombieHorde.hpp"
#include <string.h>
#include <iostream>

int	main(void) {
	ZombieHorde	*horde = new ZombieHorde(10);
	horde->announce();
}