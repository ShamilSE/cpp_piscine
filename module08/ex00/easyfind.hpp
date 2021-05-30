#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <exception>

class	ValueNotFoundException : public std::exception {
	const char* what() const throw() {
		return "value not found";
	}
};

template <typename T>
std::vector<int>::const_iterator	easyfind(T& a, int b) {
	// const iterator of vector type int
	std::vector<int>::const_iterator it = std::find(a.begin(), a.end(), b);
	if (it == a.end())
		throw ValueNotFoundException();
	return it;
}

#endif