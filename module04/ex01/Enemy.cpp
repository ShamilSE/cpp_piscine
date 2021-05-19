#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
:
	_hit_points(hp),
	_type(type)
{}

Enemy::Enemy(const Enemy & other) {
	this->_hit_points = other._hit_points;
	this->_type = other._type;
}

Enemy& Enemy::operator=(const Enemy & other) {
	this->_hit_points = other._hit_points;
	this->_type = other._type;
	return *this;
}

Enemy::~Enemy() {}

std::string const & Enemy::getType() const {return _type;}
int	Enemy::getHP() const {return _hit_points;}

void Enemy::takeDamage(int damage) {
	if (damage < 0);
	else
	{
		_hit_points -= damage;
		if (_hit_points < 0)
			delete this;
	}
}