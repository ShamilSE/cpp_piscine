#include "FragTrap.hpp"
#include <string>

int	main(void) {
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
	return 0;
}