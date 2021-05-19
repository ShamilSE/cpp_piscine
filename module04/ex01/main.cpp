#include "PlasmaRiffle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"

int	main(void) {
	PowerFist	pistol;
	Enemy		navalny(666, "traitor");
	SuperMutant	alexey(10000, "oppositionist");

	alexey.takeDamage(100);
	std::cout << alexey.getHP() << std::endl;
	navalny.takeDamage(1000);
	return 0;
}