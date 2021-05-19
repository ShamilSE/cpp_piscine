#ifndef AWEARPON_HPP
#define AWEARPON_HPP

#include <string>
#include <iostream>

class AWearpon {
	protected:
		std::string	_name;
		int	_damage;
		int	_apcost;

	public:
		AWearpon(std::string const & name, int apcost, int damage);
		AWearpon(const AWearpon & other);
		AWearpon& operator=(const AWearpon & other);
		virtual ~AWearpon();
		std::string const & getName() const;
		int	getAPCost() const;
		int	getDamage() const;
		virtual void	attack() const = 0;
};

#endif