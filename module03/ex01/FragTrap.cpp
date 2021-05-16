#include "FragTrap.hpp"
#include <iostream>
#include <string>
#include <time.h>

FragTrap::FragTrap(std::string name)
:
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
	std::cout << "FR4G-TP: " << _name <<  " Alaka-ZAM!" << std::endl;
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

void	FragTrap::rangedAttack(std::string const & target) {
	if (!target.empty())
	{
		std::cout << "FR4G-TP: " << _name <<
			" attacks " << target <<
			" at range, causing " <<
			_ranged_attack_damage <<
			" points of damage!"
		<< std::endl;
	}
	else
		std::cout << "nobody to attack((" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target) {
	if (!target.empty())
	{
		std::cout << "FR4G-TP: " << _name <<
			" attacks " << target <<
			" at range, causing " <<
			_melee_attack_damage <<
			" points of damage using just his hands!"
		<< std::endl;
	}
	else
		std::cout << "nobody to attack((" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
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

void	FragTrap::beRepaired(unsigned int amount) {
	if ((amount + _hit_points) >= _max_hit_points || amount <= 0);
	else
	{
		std::cout << "Sweet life juice!" << std::endl;
		_hit_points += amount;
	}
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
