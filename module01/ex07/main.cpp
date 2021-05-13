#include <string>
#include <iostream>
#include <fstream>

int	ft_error(std::string e_message) {
	std::cout << e_message << std::endl;
	exit(0);
}

void	ft_replace(std::ifstream& in, std::ofstream& out, const std::string& s1, const std::string& s2) {
	(void)out;
	(void)s1;
	(void)s2;
	size_t	found = 0;
	std::string	line;
	while (std::getline(in, line)) {
		if ((found = line.find(s1))) {
			std::cout << "s1 in line" << std::endl;
		}
	}
	std::cout << found << std::endl;
}

int	main(int ac, char** av) {
	std::ifstream	in;
	std::ofstream	out;

	if (ac != 4)
		ft_error("need 3 arguments");

	std::string	filename = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];

	if (filename.empty() || s1.empty() || s2.empty())
		ft_error("one or several arguments are empty");
	
	in.open(filename);

	// if (!in)
	// 	ft_error("file did't open");

	out.open("FILENAME.replace");
	ft_replace(in, out, s1, s2);
	in.close();
	out.close();
}
