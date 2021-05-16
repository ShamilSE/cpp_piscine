#include "FragTrap.hpp"
#include <iostream>
#include <string>
#include <time.h>

// FragTrap::FragTrap(std::string name) {
// 	std::cout << "FR4G-TP: " << _name <<  " Alaka-ZAM!" << std::endl;
// }

// FragTrap::~FragTrap() {
// 	std::cout << 
// 		"FR4G-TP: " << _name <<
// 		" Yessss, look into my eyes. " <<
// 		"You're getting sleepy. " <<
// 		"You're getting... " <<
// 		"zzzzzz... Zzzzzz..."
// 	<< std::endl;
// }

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
