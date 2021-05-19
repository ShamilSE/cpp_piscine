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
{}

AWearpon& AWearpon::operator=(const AWearpon & other) {
	_name = other._name;
	_damage = other._damage;
	_apcost = other._apcost;
	return *this;
}

AWearpon::~AWearpon() {}

std::string const &	AWearpon::getName() const {return _name;}
int	AWearpon::getAPCost() const {return _apcost;}
int	AWearpon::getDamage() const {return _damage;}
