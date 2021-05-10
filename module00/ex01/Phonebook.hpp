#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class		Phonebook {
	Contact	contact[8];
	int		contacts_no;

	public:
		void	add_contact();
};

#endif