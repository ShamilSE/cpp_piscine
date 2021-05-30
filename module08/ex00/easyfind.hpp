#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <exception>

/**
* @brief ValueNotFound
*/
class	ValueNotFound : public std::exception {
	const char* what() const throw() {
		return "value not found";
	}
};


/**
 * @brief Get the first occurence of an integer in
 * a integer container.
 * 
 * @param a is the integer container.
 * @param b is the integer to found.
 * 
 * @throw a ValueNotFound exception if the integer is not
 * in the container.
 */
template <typename T>
std::vector<int>::const_iterator	easyfind(T& a, int b) {
	// const iterator of vector type int
	std::vector<int>::const_iterator it = std::find(a.begin(), a.end(), b);
	if (it == a.end())
		throw ValueNotFound();
	return it;
}

#endif