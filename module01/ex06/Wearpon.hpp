#ifndef WEARPON_HPP
#define WEARPON_HPP

#include <string>
#include <iostream>

class	Wearpon {
	private:
		std::string	type;

	public:
		void	setType(std::string type);

		const std::string&	getType(void);
};

#endif