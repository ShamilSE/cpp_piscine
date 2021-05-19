#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWearpon.hpp"
#include "Enemy.hpp"
#include <string>
#include <iostream>

class Character {
	private:
		std::string	_name;
		int	_AP;
		int	_max_AP;
		AWearpon*	_wearpon;

	public:
		Character(std::string const & name);
		Character(const Character & other);
		Character& operator=(const Character & other);
		~Character();

		void	equip(AWearpon & wearpon);
		void	equip(AWearpon * wearpon);
		void	recoverAP(int amount);
		void	attack(Enemy * enemy);
		
		std::string	getName() const;
		AWearpon*	getWearpon() const;
		int	getAP() const;
};

std::ostream& operator<<(std::ostream& out, const Character & character);

#endif