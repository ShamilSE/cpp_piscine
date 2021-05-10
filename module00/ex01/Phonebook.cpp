#include "Contact.hpp"
#include <iostream>
# include <stdarg.h>
# include <string.h>

int main(void)
{
	std::string	command;
	Contact		contact[8];
	size_t		empty;

	while (1)
	{
		command = prompt(contact);
		if (!command.compare("EXIT"))
		{
			exit(0);
		}
		else if (!command.compare("ADD"))
		{
			if ((empty = contacts_count(contact)) < 8)
			{
				contact[empty].set_data();
			}
			else
				std::cout << "Phonebook is full" << std::endl;
		}
		else if (!command.compare("SEARCH"))
		{
			print_available_contacts(contact);
			print_more_contact_info(contact);
		}
		else
		{
			unknown_command(command);
		}
	}
	return 0;
}
