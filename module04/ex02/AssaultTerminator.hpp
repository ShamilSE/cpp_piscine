#ifndef ASSAULTTERMINATOR
#define ASSAULTTERMINATOR

#include "ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine {
	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator & other);
		AssaultTerminator& operator=(const AssaultTerminator & other);
		~AssaultTerminator();

		ISpaceMarine*	clone() const;
		void	battleCry() const;
		void	rangedAttack() const;
		void	meleeAttack() const;
};

#endif