#include "PlasmaRiffle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

int	main(void) {
	PowerFist	pistol;
	Enemy		navalny(666, "traitor");
	SuperMutant	alexey;
	RadScorpion	keka;

	alexey.takeDamage(100);
	std::cout << keka.getHP() << std::endl;
	std::cout << alexey.getHP() << std::endl;
	navalny.takeDamage(1000);
	return 0;
}