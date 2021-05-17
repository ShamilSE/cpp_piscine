#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>
#include <iostream>

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name) {
	_hit_points = 60;
	_max_hit_points = 60;
	_energy_points = 120;
	_max_energy_points = 120;
	_melee_attack_damage = 60;
	_ranged_attack_damage = 5;
	_armor_damage_reduction = 0;
	std::cout << "See how our enemies crumble beneath the wheel of the claptrap Robolution!" << std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "Never give up, brothers and sisters! Fulfill the destiny of the Robolution!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(const NinjaTrap & src) {
	std::cout <<"I'm now attacking - " <<
		src.getName() << 
		". Punch punch! Fight! "
		"How you like that?!" << 
	std::endl;
}

void	NinjaTrap::ninjaShoebox(const FragTrap & src) {
	std::cout <<"I'm now attacking - " <<
		src.getName() << 
		". Punch punch! Fight! "
		"How you like that?!" << 
	std::endl;
}

void	NinjaTrap::ninjaShoebox(const ScavTrap & src) {
	std::cout <<"I'm now attacking - " <<
		src.getName() << 
		". Punch punch! Fight! "
		"How you like that?!" << 
	std::endl;
}

void	NinjaTrap::ninjaShoebox(const ClapTrap & src) {
	std::cout <<"I'm now attacking - " <<
		src.getName() << 
		". Punch punch! Fight! " <<
		"How you like that?!" << 
	std::endl;
}
