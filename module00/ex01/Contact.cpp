#include "Contact.hpp"

void	Contact::set_data(void) {
	std::string	command = "";

	std::cout << "Enter name" << std::endl;
	if (!std::getline(std::cin, command))
		exit(0);
	set_name(command);
	command = "";

	std::cout << "Enter last name" << std::endl;
	if (!std::getline(std::cin, command))
		exit(0);
	set_last_name(command);
	command = "";

	std::cout << "Enter nickname" << std::endl;
	if (!std::getline(std::cin, command))
		exit(0);
	set_nickname(command);
	command = "";

	std::cout << "Enter login" << std::endl;
	if (!std::getline(std::cin, command))
		exit(0);
	set_login(command);
	command = "";

	std::cout << "Enter post" << std::endl;
	if (!std::getline(std::cin, command))
		exit(0);
	set_post(command);
	command = "";

	std::cout << "Enter email" << std::endl;
	if (!std::getline(std::cin, command))
		exit(0);
	set_email(command);
	command = "";

	std::cout << "Enter phone" << std::endl;
	if (!std::getline(std::cin, command))
		exit(0);
	set_phone(command);
	command = "";

	std::cout << "Enter birthday" << std::endl;
	if (!std::getline(std::cin, command))
		exit(0);
	set_phone(command);
	command = "";

	std::cout << "Enter favorite meal" << std::endl;
	if (!std::getline(std::cin, command))
		exit(0);
	set_birthday(command);
	command = "";

	std::cout << "Enter underwear color" << std::endl;
	if (!std::getline(std::cin, command))
		exit(0);
	set_underwear_color(command);
	command = "";

	std::cout << "Enter darkest secret" << std::endl;
	if (!std:: getline(std::cin, command))
		exit(0);
	set_secret(command);
	command = "";
}
