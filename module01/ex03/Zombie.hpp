#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class	Zombie {
	private:
		std::string	type;
		std::string	name;

	
	public:
		// Zombie(std::string name, std::string type);

		std::string	getType(void);
		std::string	getName(void);

		void		setType(std::string type);
		void		setName(std::string name);

		void		announce(void);
		void		setRandomName(void);
};

#endif