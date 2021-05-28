#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>

template <typename T>
void	iter(T* array, size_t len, void(a)(T&)) {
	for (size_t i = 0; i < len; i++)
		a(array[i]);
}

#endif