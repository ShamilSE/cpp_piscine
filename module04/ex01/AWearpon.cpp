#include "AWearpon.hpp"

AWearpon::AWearpon(std::string const & name, int apcost, int damage)
:
	_name(name),
	_damage(damage),
	_apcost(apcost)
{}

AWearpon::AWearpon(const AWearpon & other)
:
	_name(other._name),
	_damage(other._damage),
	_apcost(other._apcost)
{
	std::cout << "The gun " << _name << " has created" << std::endl;
}

AWearpon& AWearpon::operator=(const AWearpon & other) {
	this->_name = other._name;
	this->_damage = other._damage;
	this->_apcost = other._apcost;
	return *this;
}

AWearpon::~AWearpon() {
	std::cout << "The gun " << getName() << " is destroyed!" << std::endl;
}

std::string	AWearpon::getName() const {return _name;}
int	AWearpon::getAPCost() const {return _apcost;}
size_t	AWearpon::getDamage() const {return _damage;}
