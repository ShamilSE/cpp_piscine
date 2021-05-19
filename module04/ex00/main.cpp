#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Monkey.hpp"

int	main(void) {
	Sorcerer	robert("Robert", "the Magnificent");
	
	Victim		jim("Jimmy");
	Peon		joe("Joe");
	Monkey		josh("Josh");

	std::cout << robert << jim << joe << josh;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(josh);

	return 0;
}