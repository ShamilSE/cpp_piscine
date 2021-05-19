#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>

class Enemy {
	private:
		Enemy();

	protected:
		int	_hit_points;
		std::string	_type;

	public:
		Enemy(int hp, std::string const & type);
		Enemy(const Enemy & other);
		Enemy& operator=(const Enemy & other);
		virtual ~Enemy();

		std::string const & getType() const;
		int	getHP() const;
		virtual void takeDamage(int);
};

#endif