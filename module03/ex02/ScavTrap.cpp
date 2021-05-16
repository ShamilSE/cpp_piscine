#include "ScavTrap.hpp"
#include <string>
#include <iostream>

// ScavTrap::ScavTrap(std::string name) {
// 	std::cout << "I was born" << std::endl;
// }

// ScavTrap::~ScavTrap() {
// 	std::cout << 
// 		"ScavTrap: " << _name <<
// 		" Yessss, look into my eyes. " <<
// 		"You're getting sleepy. " <<
// 		"You're getting... " <<
// 		"zzzzzz... Zzzzzz..."
// 	<< std::endl;
// }

void	ScavTrap::challengeNewcomer() {
	srand((unsigned int)(time(NULL) / 2));
	std::string challenge[5] = 
	{"Do backflip", "Eat raw egg", 
	"Drink oil from FR4G-TP", "Create cringe meme", "Make FR4G-TP feel computer pain"};

	std::cout << "ScavTrap: " <<
		" thinking... thinking...\n"  
		"Aaaand you need to " <<
		challenge[rand() % 5]
	<< std::endl;
}