#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <string>
#include <iostream>
#include <stack>
#include <list>
#include <vector>

template <typename T>
class	MutantStack : public std::stack<T> {
	public:
		MutantStack() {
			std::cout << "constructor called" << std::endl;
		}
		MutantStack(const MutantStack & other) {
			*this = other;
		}
		MutantStack& operator=(const MutantStack & other) {
			std::cout << "copy constructor called" << std::endl;
			(void)other;
			return *this;
		}
		~MutantStack() {};

	 	typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin() {return (std::stack<T>::c.begin());}
		iterator	end() {return (std::stack<T>::c.end());}	
};

#endif
