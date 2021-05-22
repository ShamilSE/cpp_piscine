#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class	Character : public ICharacter {
	private:
		std::string		_name;
		AMateria*	_materia[4];
		int			_m_count;

	public:
		Character(std::string name);
		Character(const Character & other);
		Character& operator=(const Character & other);
		~Character();

		AMateria*	clone() const;

		AMateria*	getUnit(int index) const;
		std::string	const & getName() const;

		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif