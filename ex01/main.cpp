#include <iostream> // std::cout
#include <stdarg.h> //scanf()
#include <string.h> // strcmp()

int main(void)
{
	char	string[80];

	scanf("%s", string);
	if (!strcmp(string, "EXIT"))
	{
		return 0;
	}
	else
	{
		std::cout << "hello world" << std::endl;
	}
	return 0;
}
