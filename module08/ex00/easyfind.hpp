#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
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
typename T::const_iterator	easyfind(T& a, int b) {
	typename T::const_iterator it = std::find(a.begin(), a.end(), b);
	if (it == a.end())
		throw ValueNotFound();
	return it;
}

#endif