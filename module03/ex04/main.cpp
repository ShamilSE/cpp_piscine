#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <string>
#include <iostream>

int	main(void) {
	SuperTrap	*super = new SuperTrap("super trap");


	std::cout << "super's name - " << super->getName() << std::endl;
	delete super;
	return 0;
}