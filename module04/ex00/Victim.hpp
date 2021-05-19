#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class Victim {
	protected:
		std::string	_name;

	public:
		Victim(std::string name);
		Victim(const Victim & src);
		Victim& operator=(const Victim & src);
		~Victim();

		std::string	getName() const;
		std::string	greetings() const;
		virtual void	getPolymorphed() const;
};

std::ostream&	operator<<(std::ostream& out, const Victim & src);

#endif