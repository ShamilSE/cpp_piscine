#ifndef MONKEY_HPP
#define MONKEY_HPP

#include "Victim.hpp"

class Monkey : public Victim {
	public:
		Monkey(std::string name);
		Monkey(const Monkey & src);
		Monkey& operator=(const Monkey & src);
		~Monkey();

		virtual void getPolymorphed() const;
};

std::ostream& operator<<(std::ostream&out, const Monkey & src);

#endif