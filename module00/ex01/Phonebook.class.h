#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H

#include "Contact.class.h"

class		Phonebook {
	Contact	contact[8];
	int		contacts_no;

	public:
		void	add_contact();
};

#endif