#ifndef WEARPON_HPP
#define WEARPON_HPP

#include <string>
#include <iostream>

class Wearpon {
	private:
		std::string	_type;

	public:
		Wearpon();
		Wearpon(std::string type);
		std::string	getType();
		void		setType(std::string type);
};

#endif