#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap (std::string name)
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
	std::cout << "ClapTrap construcrot called" << std::endl;
}

ClapTrap::~ClapTrap () {
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::rangedAttack(std::string const & target) {
	if (!target.empty())
	{
		std::cout << _name <<
			" attacks " << target <<
			" at range, causing " <<
			_ranged_attack_damage <<
			" points of damage!"
		<< std::endl;
	}
	else
		std::cout << "nobody to attack((" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target) {
	if (!target.empty())
	{
		std::cout  << _name <<
			" attacks " << target <<
			" at range, causing " <<
			_melee_attack_damage <<
			" points of damage using just his hands!"
		<< std::endl;
	}
	else
		std::cout << "nobody to attack((" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
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

void	ClapTrap::beRepaired(unsigned int amount) {
	if ((amount + _hit_points) >= _max_hit_points || amount <= 0);
	else
	{
		std::cout << "Sweet life juice!" << std::endl;
		_hit_points += amount;
	}
}
