#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class	Brain {
	private:
		size_t	weight;

	public:
		size_t	getWeight(void);
		std::string	identify(void);
};

#endif