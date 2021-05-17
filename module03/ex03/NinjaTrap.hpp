#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

class NinjaTrap : public ClapTrap {
	private:
		NinjaTrap();

	public:
		NinjaTrap(std::string name);
		~NinjaTrap();
		NinjaTrap(const NinjaTrap & src);
		NinjaTrap operator=(const NinjaTrap & src);

		void	ninjaShoebox(const NinjaTrap & src);
		void	ninjaShoebox(const FragTrap & src);
		void	ninjaShoebox(const ScavTrap & src);
		void	ninjaShoebox(const ClapTrap & src);
};

#endif