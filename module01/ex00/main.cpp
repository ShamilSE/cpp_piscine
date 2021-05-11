#include "Pony.hpp"
#include <string>
#include <iostream>


Pony	*ponyOnTheHeap(void) {
	Pony *pony = new Pony;
	return pony;
}

void	ponyOnTheStack(void) {
	Pony pony;
}

int	main(void) {
	ponyOnTheStack();
	Pony *pony = ponyOnTheHeap();

	delete pony;
}