#include "Base.hpp"

Base*	generate(void) {
	Base*	classes_pool[3];
	srand(time(NULL));

	classes_pool[0] = new A;
	classes_pool[1] = new B;
	classes_pool[2] = new C;

	int	random_index = rand() % 3;
	std::cout << *classes_pool[random_index];
	return classes_pool[random_index];
}

void	identify_from_pointer(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base& p) {
	Base*	a = &p;
	if (dynamic_cast<A*>(a))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(a))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(a))
		std::cout << "C" << std::endl;
}

int	main(void) {
	Base*	p = generate();
	identify_from_pointer(p);
	identify_from_reference(*p);
	return 0;
}