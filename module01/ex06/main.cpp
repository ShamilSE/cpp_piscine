#include "Wearpon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <string>
#include <iostream>

int	main(void) {
	{
		Wearpon		club = Wearpon("crude spiked club");

		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Wearpon		club = Wearpon("crude spiked club");

		HumanB jim("Jim");
		jim.setWearpon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}