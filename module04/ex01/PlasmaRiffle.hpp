#ifndef PLASMARIFFLE_HPP
#define PLASMARIFFLE_HPP

#include "AWearpon.hpp"

class PlasmaRiffle : public AWearpon {
	public:
		PlasmaRiffle();
		PlasmaRiffle(std::string const & name, int apcost, int damage);
		PlasmaRiffle(const PlasmaRiffle & other);
		PlasmaRiffle& operator=(const PlasmaRiffle & other);
		~PlasmaRiffle();

		void	attack() const;
};

#endif
