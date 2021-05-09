#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

#include <string>
#include <stdarg.h>

class		Contact {
	private:
		std::string	name;
		std::string	last_name;
		std::string	nickname;
		std::string	login;
		std::string	post;
		std::string	email;
		std::string	phone;
		std::string	birthday;
		std::string	fav_meal;
		std::string	underwear_color;
		std::string	color;

	public:
		void		set_data(size_t index);
		void		set_name(std::string name);
		std::string	get_name();
		std::string	get_last_name();
};

#endif