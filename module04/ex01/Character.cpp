#include "Character.hpp"

Character::Character(std::string const & name)
:
	_name(name),
	_AP(40),
	_max_AP(40),
	_wearpon(NULL)
{}

Character::Character(const Character & other) {
	this->_name = other._name;
	this->_AP = other._AP;
	this->_max_AP = other._AP;
	this->_wearpon = other._wearpon;
}

Character& Character::operator=(const Character & other) {
	this->_name = other._name;
	this->_AP = other._AP;
	this->_max_AP = other._AP;
	this->_wearpon = other._wearpon;
	return *this;
}

Character::~Character() {}

void	Character::equip(AWearpon & wearpon) {
	this->_wearpon = &wearpon;
}

void	Character::equip(AWearpon * wearpon) {
	this->_wearpon = wearpon;
}

void	Character::recoverAP(int amount) {
	if (amount > 0)
		_AP += amount;
	if (_AP > _max_AP)
		_AP = _max_AP;
}

std::string	Character::getName() const {return _name;}
AWearpon*	Character::getWearpon() const {return _wearpon;}
int	Character::getAP() const {return _AP;}

void	Character::attack(Enemy * enemy) {
	if (getWearpon())
	{
		if (_AP >= getWearpon()->getAPCost())
		{
			std::cout << getName() << " attacks " <<
			enemy->getType() << " whith a " <<
			getWearpon()->getName() << std::endl;
			getWearpon()->attack();
			enemy->takeDamage(getWearpon()->getDamage());
			_AP -= getWearpon()->getAPCost();
		}
	}
}

std::ostream& operator<<(std::ostream& out, const Character & character) {
	out << character.getName() << " has " << character.getAP() <<
	" AP and ";
	if (character.getWearpon())
		std::cout << "wields a " << character.getWearpon()->getName() << std::endl;
	else
		std::cout << "is unarmed" << std::endl;
	return out;
}
