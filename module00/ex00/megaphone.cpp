#include <iostream>
#include <ctype.h>

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	int		i, ii;
	for (i = 1; argv[i]; i++)
	{
		for (ii = 0; argv[i][ii]; ii++)
		{
			std::cout << (char)toupper(argv[i][ii]);
		}
		if (argv[i + 1])
			std::cout << " ";
		ii = 0;
	}
	std::cout << '\n';
	return 0;
}
