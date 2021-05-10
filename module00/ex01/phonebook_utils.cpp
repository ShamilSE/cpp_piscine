#include "Contact.hpp"
#include <iostream>
# include <stdarg.h>
# include <string.h>

size_t	contacts_count(Contact contact[8])
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

void	unknown_command(std::string command)
{
	std::cout << "Unknown command: ";
	std::cout << command << std::endl;
	std::cout << "Please, use the following:" << std::endl;
	std::cout << "ADD\nSEARCH\nEXIT\n" << std::endl;
}

void	print_spaces(std::string field)
{
	size_t	index = 10;

	while (index > field.length())
	{
		std::cout << " ";
		index--;
	}
}

void	print_ten_of(std::string str)
{
	std::cout << " ";
	if (str.length() < 10)
	{
		print_spaces(str);
		std::cout << str;
	}
	else
	{
		for (size_t j = 0; j < 9; j++)
		{
			std::cout << str[j];
		}
		std::cout << ".";
	}
}

void	print_available_contacts(Contact contact[8])
{
	size_t		index = 0;
	std::string	string = "";

	std::cout << "     index|first name| last name|  nickname|" << std::endl;
	while (index < contacts_count(contact))
	{
		print_spaces("9");
		std::cout << index;
		print_ten_of(contact[index].get_name());
		print_ten_of(contact[index].get_last_name());
		print_ten_of(contact[index].get_nickname());
		std::cout << std::endl;
		index++;
	}
}

void	print_contact_info(Contact contact)
{
	std::cout <<  "name - " << contact.get_name() << std::endl;
	std::cout << "last name - " << contact.get_last_name() << std::endl;
	std::cout << "nickname - " << contact.get_nickname() << std::endl;
	std::cout << "login - " << contact.get_login() << std::endl;
	std::cout << "post - " << contact.get_post() << std::endl;
	std::cout << "email - " << contact.get_email() << std::endl;
	std::cout << "phone - " << contact.get_phone() << std::endl;
	std::cout << "birthday - " << contact.get_birthday() << std::endl;
	std::cout << "favorite meal - " << contact.get_fav_meal() << std::endl;
	std::cout << "underwear color - " << contact.get_underwear_color() << std::endl;
	std::cout << "secret - " << contact.get_secret() << std::endl;
}

bool	check_integer(std::string command)
{
	if (command.length() > 1)
		return false;
	if (command[0] >= '0' && command[0] <= '9')
		return true;
	return false;
}