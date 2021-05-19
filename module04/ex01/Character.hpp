#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWearpon.hpp"
#include <string>
#include <iostream>

class Character {
	private:
		std::string	_name;
		std::string	_type;
		int	_AP;
		int	_max_AP;
		AWearpon	*wearpon;

	public:
		Character(std::string const & name);
		Character(const Character & other);
		Character& operator=(const Character & other);
		~Character();

		void	recoverAP();
		void	attack();
};

#endif