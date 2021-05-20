#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine {
	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine & other);
		TacticalMarine& operator=(const TacticalMarine & other);
		~TacticalMarine();
};

#endif