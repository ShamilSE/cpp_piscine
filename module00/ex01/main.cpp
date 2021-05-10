#include "Phonebook.hpp"
#include <iostream>
# include <stdarg.h> //scanf()
# include <string.h> // strcmp()

static size_t	contacts_count(Contact contact[8])
{
	size_t	index = 0;

	while (index < 9)
	{
		if (contact[index].get_name().empty()
		&& contact[index].get_last_name().empty()
		&& contact[index].get_nickname().empty()
		&& contact[index].get_login().empty()
		&& contact[index].get_post().empty()
		&& contact[index].get_email().empty()
		&& contact[index].get_phone().empty()
		&& contact[index].get_birthday().empty()
		&& contact[index].get_fav_meal().empty()
		&& contact[index].get_underwear_color().empty()
		&& contact[index].get_secret().empty())
			break ;
		index++;
	}
	return index;
}

static void	unknown_command()
{
	std::cout << "Unknown command: ";
	std::cout << command << std::endl;
	std::cout << "Please, use the following:" << std::endl;
	std::cout << "ADD\nSEARCH\nEXIT\n" << std::endl;
}

void	print_available_contacts(Contact contact[8])
{
	
}

int main(void)
{
	std::string	command;
	Contact		contact[8];
	size_t		empty;

	while (1)
	{
		std::cout << "Enter a command" << std::endl;
		if (!std::getline(std::cin, command))
		{
			std::cout << "Exit" << std::endl;
			return 0;
		}
		if (!command.compare("EXIT"))
		{
			return 0;
		}
		else if (!command.compare("ADD"))
		{
			if ((empty = contacts_count(contact)) < 8)
			{
				contact[empty].set_data();
				std::cout << "Contact added!\n" << std::endl;
				std::cout << empty + 1;
				std::cout << " contact(s) in Phone Book" << std::endl;;
			}
			else
				std::cout << "Phonebook is full" << std::endl;
		}
		else if (!command.compare("SEARCH")
		{
			print_available_contacts(contact);
		}
		else
		{
			unknown_command();
		}
	}
	return 0;
}