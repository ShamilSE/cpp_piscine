#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string>
#include <iostream>

template <typename T>
void	easyfind(T& a, int b) {
	for (size_t i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		if (a[i] == b) {
			std::cout << b << " found, it's index is " << i << std::endl; 
			return;
		}
	}
	throw "value not found";
}

#endif