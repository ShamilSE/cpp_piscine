#include "span.hpp"

template <typename T>
void	nullify(T& el) {el = 0;}

Span::Span(size_t n) {
	_size = 0;
	_capacity = n;
	_data.reserve(_capacity);
	for (size_t i = 0; i < _capacity; i++)
		_data[i] = 0;
}
Span::Span(const Span & other) {
	*this = other;
}
Span& Span::operator=(const Span & other) {
	_size = other._size;
	_capacity = other._capacity;
	_data = other._data;
	return *this;
}

const char*	Span::NoSpaceInSpan::what() const throw() {
	return "no space left in span";
}

const char*	Span::IndexOutOfRange::what() const throw() {
	return "index out of range";
}

const char*	Span::NoNumbersToSpan::what() const throw() {
	return "no numbers to span";
}

// template <typename T>
// void	Span::iter(void(f)(T&)) {
// 	for (size_t i = 0; i < _capacity; i++)
// 		f(_data[i]);
// }

void	Span::addNumber(size_t number) {
	if (_size + 1 <= _capacity) {
		_data.push_back(number);
		_size++;
	}
	else
		throw NoSpaceInSpan();
}

size_t	Span::shortestSpan() const {
	if (_size <= 1)
		throw NoNumbersToSpan();
	std::vector<int>::const_iterator	current = _data.begin();
	std::vector<int>::const_iterator	it = _data.begin() + 1;
	int	shortest_span = abs(*current - *(current + 1));
	for (; current + 1 != _data.end(); ++current) {
		if (current != _data.begin())
			it = _data.begin();
		while (it != _data.end()) {
			if (it != current) {
				if (abs(*current - *it) < shortest_span)
					shortest_span = abs(*current - *it);
			}
			it++;
		}
	}
	return shortest_span;
}

size_t	Span::longestSpan() const {
	if (_size <= 1)
		throw NoNumbersToSpan();
	std::vector<int>::const_iterator min = std::min_element(_data.begin(), _data.end());
	std::vector<int>::const_iterator max = std::max_element(_data.begin(), _data.end());
	
	return abs(*min - *max);
}

size_t	Span::operator[](size_t index) {
	if (index > _capacity)
		throw IndexOutOfRange();
	return _data[index];
}