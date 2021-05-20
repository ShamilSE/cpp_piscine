#include "Squad.hpp"
#include "AssaultTerminator.hpp"

int	main(void) {
	Squad	crew;
	ISpaceMarine*	marine = new AssaultTerminator;
	ISpaceMarine*	marine2 = new AssaultTerminator;

	crew.push(marine);
	std::cout << crew.getCount() << std::endl;
	Squad	crew2 = crew;

	crew2.deleteMarines();
	crew.push(marine2);
	std::cout << crew.getCount() << std::endl;
	std::cout << crew.getUnit(1) << std::endl;
	return 0;
}