#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>
#include <iostream>

int	main(void) {
	NinjaTrap	*ninja = new NinjaTrap("hikoshi");
	NinjaTrap	*ninja_boss = new NinjaTrap("hirasima");
	ClapTrap	*boss = new ClapTrap("boss");
	FragTrap	*frag = new FragTrap("frag");
	ScavTrap	*scav = new ScavTrap("scav");

	std::cout << "------------------" << std::endl;

	ninja->ninjaShoebox(*boss);
	ninja->ninjaShoebox(*ninja_boss);
	ninja->ninjaShoebox(*frag);
	ninja->ninjaShoebox(*scav);

	std::cout << "------------------" << std::endl;

	ninja->rangedAttack("box");
	boss->meleeAttack("box");
	scav->takeDamage(90);
	scav->beRepaired(70);

	std::cout << "------------------" << std::endl;
	
	delete ninja;
	delete ninja_boss;
	delete boss;
	delete frag;
	delete scav;
	return 0;
}