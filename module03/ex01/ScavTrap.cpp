#include "ScavTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap(std::string name):
	_hit_points(100),
	_max_hit_points(100),
	_energy_points(100),
	_max_energy_points(100),
	_level(1),
	_name(name),
	_melee_attack_damage(30),
	_ranged_attack_damage(20),
	_armor_damage_reduction(5)
{
	std::cout << "I was born" << std::endl;
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

void	ScavTrap::rangedAttack(std::string const & target) {
	if (!target.empty())
	{
		std::cout << "ScavTrap: " << _name <<
			" attacks " << target <<
			" at range, causing " <<
			_ranged_attack_damage <<
			" points of damage!"
		<< std::endl;
	}
	else
		std::cout << "nobody to attack((" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target) {
	if (!target.empty())
	{
		std::cout << "ScavTrap: " << _name <<
			" attacks " << target <<
			" at range, causing " <<
			_melee_attack_damage <<
			" points of damage using just his hands!"
		<< std::endl;
	}
	else
		std::cout << "nobody to attack((" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	if (((!_armor_damage_reduction && amount >= _hit_points) || 
	(_armor_damage_reduction && ((unsigned int)(amount / 2)) >= _hit_points)) || amount <= 0);
	else
	{
		std::cout << "Why do I even feel pain?!" << std::endl;
		if (_armor_damage_reduction)
		{
			amount = (int)(amount / 2);
			_armor_damage_reduction--;
			_hit_points -= amount;
			if (_armor_damage_reduction == 0)
				std::cout << "Armor is broken" << std::endl;
		}
		else
			_hit_points -= amount;
	}
}

void	ScavTrap::beRepaired(unsigned int amount) {
	if ((amount + _hit_points) >= _max_hit_points || amount <= 0);
	else
	{
		std::cout << "Sweet life juice!" << std::endl;
		_hit_points += amount;
	}
}

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