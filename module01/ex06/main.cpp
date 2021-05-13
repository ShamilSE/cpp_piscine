#include "HumanA.hpp"
#include <string>
#include <iostream>

int	main(void) {
	HumanA	kirill;

	kirill.wearpon.setType("pistol");
	std::cout << kirill.attack() << std::endl;
}