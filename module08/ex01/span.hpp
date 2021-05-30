#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <iostream>
#include <vector>
#include <exception>
#include <cmath>

class	Span {
	private:
		size_t				_size;
		size_t				_capacity;
		std::vector<int>	_data;

	class	NoSpaceInSpan : public std::exception {
		const char* what() const throw();
	};

	class	IndexOutOfRange : public std::exception {
		const char*	what() const throw();
	};

	class	NoNumbersToSpan : public std::exception {
		const char* what() const throw();
	};

	public:
		Span(size_t);
		Span(const Span & other);
		Span& operator=(const Span & other);
		~Span() {};

		void	addNumber(size_t);
		size_t	shortestSpan() const;
		size_t	longestSpan() const;

		template <typename T>
		void	iter(void(f)(T&));

		size_t	operator[](size_t index);
};

#endif