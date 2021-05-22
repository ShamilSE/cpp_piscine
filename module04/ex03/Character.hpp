#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class	Character : public ICharacter {
	private:
		std::string		_name;
		AMateria*	_materia[4];

	public:
		Character(std::string name);
		Character(const Character & other);
		Character& operator=(const Character & other);
		~Character();

		AMateria*	getUnit(int index) const;
};

#endif