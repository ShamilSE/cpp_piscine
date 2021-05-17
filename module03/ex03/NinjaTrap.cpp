#include "NinjaTrap.hpp"
#include <string>
#include <iostream>

NinjaTrap::NinjaTrap()
:
	_hit_points(60),
	_max_hit_points(60),
	_energy_points(120),
	_max_energy_points(120),
	_level(1),
	_melee attack damage(60),
	_ranged attack damage(5),
	_armor_damage_reduction(0)
{}