#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(size_t N) {
	this->N = N;

	if (N > 0)
	{
		this->zombies = new Zombie[N];
		for (size_t index = 0; N > index; index++)
		{
			std::cout << index + 1;
			std::cout << " zombie created" << std::endl;
			zombies[index].setRandomName();
		}

	}
	else
		std::cout << "0 zombies created, happy?" << std::endl;
}

void	ZombieHorde::announce(void) {
	for (size_t index = 0; this->N > index; index++)
	{
		this->zombies[index].announce();
	}
}