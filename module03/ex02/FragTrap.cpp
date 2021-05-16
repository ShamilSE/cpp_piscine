#include "FragTrap.hpp"
#include <iostream>
#include <string>
#include <time.h>

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	// _hit_points = 100;
	// _max_hit_points = 100;
	// _energy_points = 100;
	// _max_energy_points = 100;
	// _level = 1,
	// _name(name),
	// _melee_attack_damage(30),
	// _ranged_attack_damage(20),
	// _armor_damage_reduction(5)
	std::cout << "FR4G-TP: " << name <<  " Alaka-ZAM!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << 
		"FR4G-TP: " << _name <<
		" Yessss, look into my eyes. " <<
		"You're getting sleepy. " <<
		"You're getting... " <<
		"zzzzzz... Zzzzzz..."
	<< std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	srand((unsigned int)(time(NULL) / 2));
	std::string attack_type_pool[5] = 
	{"Hacker attack!", "Mental attack!", 
	"Hit below the belt attack!", "Throwing pen attack!", "Cringe attack!"};

	std::cout << "FR4G-TP: " << _name <<
		" attacks " << target <<
		" at range, causing " <<
		0 << " points of damage using " <<
		attack_type_pool[rand() % 5]
	<< std::endl;
}
