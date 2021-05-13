#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Wearpon.hpp"
#include <string>
#include <iostream>

int	main(void) {
	Wearpon		club = Wearpon("crude spiked club");

	HumanA bob("Bob", club);
	bob.attack();
	club.setType("minigun");
	bob.attack();
}