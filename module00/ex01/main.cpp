#include "Phonebook.class.h"
#include <iostream>
# include <stdarg.h> //scanf()
# include <string.h> // strcmp()

void	add(Contact contact[8])
{
	
}

int main(void)
{
	std::string	command;
	Contact		contact[8];

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
			std::cout << "add" << std::endl;
			add(contact);
		}
		else
		{
			std::cout << "unknown command: ";
			std::cout << command << std::endl;
			std::cout << "please, use the following:" << std::endl;
			std::cout << "ADD\nSEARCH\nEXIT" << std::endl;
		}
	}
	return 0;
}