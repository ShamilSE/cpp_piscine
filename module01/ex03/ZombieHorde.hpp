#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class	ZombieHorde {
	private:
		Zombie	*zombies;
		size_t		N;

	public:
		ZombieHorde(size_t N);
		void	announce(void);
};

#endif