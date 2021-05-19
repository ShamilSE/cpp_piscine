#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Victim.hpp"
#include "Peon.hpp"
#include <string>
#include <iostream>

class Sorcerer {
	private:
		std::string	_name;
		std::string	_title;
		Sorcerer();

	public:
		Sorcerer(std::string name, std::string title);
		~Sorcerer();
		Sorcerer(const Sorcerer & src);
		Sorcerer& operator=(const Sorcerer & src);

		std::string	getName() const;
		std::string	getTitle() const;
		std::string	greetings() const;

		virtual void	polymorph(Victim const & src) const;
};

std::ostream &operator<<(std::ostream &out, const Sorcerer & src);

#endif