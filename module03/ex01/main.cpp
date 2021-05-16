#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

int	main(void) {
	ScavTrap *bigi = new ScavTrap("dsf");
	FragTrap *mini = new FragTrap("mini");

	mini->rangedAttack("box");
	mini->meleeAttack("box");
	mini->vaulthunter_dot_exe("box");
	mini->takeDamage(50);
	mini->takeDamage(23);
	mini->takeDamage(10);
	mini->takeDamage(20);
	mini->takeDamage(10);
	mini->beRepaired(30);
	mini->meleeAttack("box");
	mini->rangedAttack("box");
	mini->vaulthunter_dot_exe("box");
	delete mini;

	std::cout << "\n----------------------\n" << std::endl;
	
	bigi->rangedAttack("wall");
	bigi->meleeAttack("wall");
	bigi->takeDamage(50);
	bigi->takeDamage(23);
	bigi->takeDamage(10);
	bigi->takeDamage(20);
	bigi->takeDamage(10);
	bigi->beRepaired(30);
	bigi->meleeAttack("wall");
	bigi->rangedAttack("wall");
	bigi->challengeNewcomer();
	delete bigi;
	return 0;
}