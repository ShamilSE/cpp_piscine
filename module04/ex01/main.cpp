#include "PlasmaRiffle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int	main(void) {
	//------Basic test------//
	Character*	me = new Character("me");

	std::cout << *me;

	Enemy*	b = new RadScorpion();

	AWearpon*	pr = new PlasmaRiffle();
	AWearpon*	pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	//----------------------//
	return 0;
}
