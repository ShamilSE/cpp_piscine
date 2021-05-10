#include "Contact.hpp"
#include <iostream>
# include <stdarg.h>
# include <string.h>

int main(void)
{
	std::string	command;
	Contact		contact[8];
	size_t		empty;
	size_t		index;

	while (1)
	{
		std::cout << "Enter a command" << std::endl;
		if (!std::getline(std::cin, command))
			exit(0);
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
			std::cout << "\nEnter index of interested contact or BACK" << std::endl;
			if (!std::getline(std::cin, command))
				exit(0);
			if (!command.compare("BACK"))
				continue ;
			if (!check_integer(command))
			{
				std::cout << "Incorrect index" << std::endl;
				continue ;
			}
			index = std::stoi(command, &empty, 10);
			print_contact_info(contact[index]);
		}
		else
		{
			unknown_command(command);
		}
	}
	return 0;
}
