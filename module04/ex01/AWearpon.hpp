#ifndef AWEARPON_HPP
#define AWEARPON_HPP

#include <string>
#include <iostream>

class AWearpon {
	protected:
		std::string	_name;
		size_t	_damage;
		size_t	_apcost;
		AWearpon(std::string const & name, int apcost, int damage);

	public:
		AWearpon(const AWearpon & other);
		AWearpon& operator=(const AWearpon & other);
		virtual ~AWearpon();
		std::string getName() const;
		int	getAPCost() const;
		size_t	getDamage() const;
		virtual void	attack() const = 0;
};

#endif