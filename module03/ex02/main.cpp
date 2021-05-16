#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

int	main(void) {
	FragTrap	*mini = new FragTrap("ioi");
	ScavTrap	*bigi = new ScavTrap("iii");

	bigi->meleeAttack("box");
	mini->meleeAttack("box");
	bigi->challengeNewcomer();
	mini->vaulthunter_dot_exe("box");
	delete mini;
	delete bigi;
	return 0;
}