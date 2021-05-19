#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWearpon.hpp"

class PowerFist : public AWearpon {
	public:
		PowerFist();
		~PowerFist();
		PowerFist(const PowerFist & other);
		PowerFist& operator=(const PowerFist & other);

		void	attack() const;
};

#endif