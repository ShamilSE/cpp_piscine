#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap {
	private:
		int			_hit_points;
		int			_max_hit_points;
		int			_energy_points;
		int			_max_energy_points;
		int			_level;
		std::string	_name;
		int			_melee_attack_damage;
		int			_ranged_attack_damage;
		int			_armor_damage_reduction;

	public:
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap& src);
		FragTrap&	operator=(const FragTrap& src);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const & target);
};

#endif