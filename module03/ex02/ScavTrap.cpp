#include "ScavTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
// :
// 	_hit_points(100),
// 	_max_hit_points(100),
// 	_energy_points(100),
// 	_max_energy_points(100),
// 	_level(1),
// 	_name(name),
// 	_melee_attack_damage(30),
// 	_ranged_attack_damage(20),
// 	_armor_damage_reduction(5)
// {
	std::cout << "I was born (ScavTrap)" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << 
		"ScavTrap: " << _name <<
		" Yessss, look into my eyes. " <<
		"You're getting sleepy. " <<
		"You're getting... " <<
		"zzzzzz... Zzzzzz..."
	<< std::endl;
}

void	ScavTrap::challengeNewcomer() {
	srand((unsigned int)(time(NULL) / 2));
	std::string challenge[5] = 
	{"Do backflip", "Eat raw egg", 
	"Drink oil from FR4G-TP", "Create cringe meme", "Make FR4G-TP feel computer pain"};

	std::cout << "ScavTrap: " <<
		" thinking... thinking... "  
		"Aaaand you need to " <<
		challenge[rand() % 5]
	<< std::endl;
}