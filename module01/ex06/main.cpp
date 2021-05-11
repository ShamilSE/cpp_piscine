#include "Wearpon.hpp"
#include <string>
#include <iostream>

int	main(void) {
	Wearpon	gun;

	gun.setType("pistol");
	std::cout << gun.getType() << std::endl;
}