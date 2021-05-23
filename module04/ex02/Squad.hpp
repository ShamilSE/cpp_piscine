#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"

class	Squad : public ISquad {
	private:
		size_t	_count;
		ISpaceMarine**	_marines;

	public:
		Squad();
		Squad(const Squad & other);
		Squad& operator=(const Squad & other);
		~Squad();

		int	getCount() const ;
		ISpaceMarine*	getUnit(int) const ;
		int	push(ISpaceMarine*);

		void	deleteMarines();
};

#endif