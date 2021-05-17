#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap& src);
		FragTrap&	operator=(const FragTrap& src);

		void	vaulthunter_dot_exe(std::string const & target);
};

#endif