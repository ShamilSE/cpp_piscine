#ifndef ASSAULTTERMINATOR
#define ASSAULTTERMINATOR

#include <string>
#include <iostream>

class	AssaultTerminator {
	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator & other);
		AssaultTerminator& operator=(const AssaultTerminator & other);
		~AssaultTerminator();

		void	battleCry();
		void	rangedAttack();
		void	meleeAttack();
};

#endif