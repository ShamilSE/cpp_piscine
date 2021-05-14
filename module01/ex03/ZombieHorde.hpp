#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class	ZombieHorde {
	private:
		Zombie	*zombies;
		int		N;

	public:
		ZombieHorde(int N);
		void	announce(void);
};

#endif