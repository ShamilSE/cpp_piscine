#ifndef PONY_HPP
#define PONY_HPP
#include <string>
#include <iostream>

class	Pony {
	private:
		std::string color;
		std::string	name;

	public:
		std::string	getColor(void);
		std::string	getName(void);

		void		setColor(std::string color);
		void		setName(std::string name);

		void		sayHello(void);
};

#endif