#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class	Character : public ICharacter {
	private:
		std::string			_name;
		static const size_t arr_size = 4;
		AMateria*			_materia[arr_size];
		size_t				_m_count;

	public:
		Character(std::string name);
		Character(const Character & other);
		Character& operator=(const Character & other);
		~Character();

		AMateria*	clone() const;

		AMateria*	getUnit(int index) const;
		std::string	const & getName() const;

		void	unequip(int idx);
		void	equip(AMateria* m);
		void	use(int idx, ICharacter& target);
};

#endif