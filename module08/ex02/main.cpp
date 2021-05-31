#include "mutantstack.hpp"

int	main(void) {
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();

	++it;
	--it;

	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "========================================" << std::endl;
	while (--ite != mstack.begin())
		std::cout << *ite << std::endl;

	std::stack<int> s(mstack);
	return 0;
}