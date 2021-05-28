#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>
#include <exception>

template <typename T>
class	Array {
	private:
		size_t	_n;
		T*		_data;

	public:
		Array();
		Array(size_t n);
		Array(const Array<T>& other);
		Array& operator=(const Array & other);
		T& operator[](size_t index);
		
		~Array();

		class	IndexOutOfRange : public std::exception {
			const char* what() const throw();
		};

		void	nullify(T el);
		void	iter(void(a)(T&));

		size_t	size() const;
		T*		getData() const;
};

template <typename T>
std::ostream& operator<<(std::ostream& out, const Array<T>& other) {
	out << *other.getData();
	return out;
}

#include "Array.ipp"
#endif
