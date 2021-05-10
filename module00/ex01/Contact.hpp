#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <stdarg.h>
#include <string.h>
#include <iostream>

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
		std::string	secret;

	public:

		void		set_data(void);
		
		void		set_name(std::string name) {this->name = name;}
		void		set_last_name(std::string last_name) {this->last_name = last_name;}
		void		set_nickname(std::string nickname) {this->nickname = nickname;}
		void		set_login(std::string login) {this->login = login;}
		void		set_post(std::string post) {this->post = post;}
		void		set_email(std::string email) {this->email = email;}
		void		set_phone(std::string phone) {this->phone = phone;}
		void		set_birthday(std::string birthday) {this->birthday = birthday;}
		void		set_fav_meal(std::string fav_meal) {this->fav_meal = fav_meal;}
		void		set_underwear_color(std::string underwear_color) {this->underwear_color = underwear_color;}
		void		set_secret(std::string secret) {this->secret = secret;}

		std::string	get_name() {return this->name;}
		std::string	get_last_name() {return this->last_name;}
		std::string	get_nickname() {return this->nickname;}
		std::string	get_login() {return this->login;}
		std::string	get_post() {return this->post;}
		std::string	get_email() {return this->email;}
		std::string	get_phone() {return this->phone;}
		std::string get_birthday() {return this->birthday;}
		std::string	get_fav_meal() {return this->fav_meal;}
		std::string get_underwear_color() {return this->underwear_color;}
		std::string	get_secret() {return this->secret;}
};

size_t		contacts_count(Contact contact[8]);
void		unknown_command(std::string command);
void		print_spaces(std::string field);
void		print_ten_of(std::string str);
void		print_available_contacts(Contact contact[8]);
void		print_more_contact_info(Contact contact[8]);
bool		check_integer(std::string command);
std::string	prompt(Contact contact[8]);

#endif