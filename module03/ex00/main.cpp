#include "FragTrap.hpp"
#include <string>

int	main(void) {
	FragTrap *mini = new FragTrap("mini");

	mini->rangedAttack("box");
	mini->meleeAttack("box");
	mini->vaulthunter_dot_exe("box");
	delete mini;
	return 0;
}