#include "Pony.hpp"
#include <string>
#include <iostream>

std::string	Pony::getColor(void) {return this->color;}
std::string	Pony::getName(void) {return this->name;}

void		Pony::setColor(std::string color) {this->color = color;}
void		Pony::setName(std::string name) {this->name = name;}

void		Pony::sayHello(void) {std::cout << "hello!" << std::endl;}
