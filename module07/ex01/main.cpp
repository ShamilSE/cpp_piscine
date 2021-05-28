#include "iter.hpp"

size_t	ft_strlen(char*	str) {
	size_t i;
	for (i = 0; str[i]; i++)
		i++;
	return i;
}

template <typename T>
void	nullify(T el) {
	el = 0;
}

int	main(void) {
	char	c_array[5] = {'a', 'b', 'c', 'd', 'e'};
	int		i_array[5] = {1, 2, 3, 4, 5};

	//------------------------------------------//
	std::cout << c_array << std::endl;
	iter(c_array, 5, nullify);
	std::cout << c_array << std::endl;
	//------------------------------------------//
	for (int i = 0; i < 5; i++)
		std::cout << i_array[i];
	iter(i_array, 5, nullify);
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << i_array[i];
	std::cout << std::endl;
	//------------------------------------------//
	return 0;
}