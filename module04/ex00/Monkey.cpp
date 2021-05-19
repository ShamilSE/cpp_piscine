#include "Monkey.hpp"

Monkey::Monkey(std::string name)
:
	Victim(name)
{
	std::cout << "IIIIAAAA AAAA))))!!" << std::endl;
}

Monkey::~Monkey() {
	std::cout << "IIIAA AA((((" << std::endl;
}

Monkey::Monkey(const Monkey & src)
:
	Victim(src._name)
{}

Monkey& Monkey::operator=(const Monkey & src) {
	Victim(src._name);
	return *this;
}

void	Monkey::getPolymorphed() const {
	std::cout << getName() << " turned to a Human" << std::endl;	
}

std::ostream& operator<<(std::ostream&out, const Monkey & src) {
	out << "Monkey " << src.getName() << " said 'BAAANANAAAA!'" << std::endl;
	return out;
}
