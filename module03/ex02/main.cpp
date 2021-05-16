#include "ClapTrap.hpp"
// #include "FragTrap.hpp"
// #include "ScavTrap.hpp"
#include <string>
#include <iostream>

int	main(void) {
	ClapTrap *mini = new ClapTrap("ioi");

	delete mini;
	return 0;
}