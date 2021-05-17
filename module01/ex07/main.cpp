#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int	ft_error(std::string e_message) {
	std::cout << e_message << std::endl;
	exit(0);
}

void	ft_replace(std::ifstream& in, std::ofstream& out, const std::string& s1, const std::string& s2) {
	std::ostringstream buf;
	std::string	str;
	std::string	line;
	size_t		found = 0;
	char		a;

	buf << in.rdbuf();
	str = buf.str();
	while (true) {
		found = str.find(s1, found);
		if (found == std::string::npos)
			break;
		str.replace(found, s1.length(), s2);
		a = str[found];
		found += s1.length();
	}

	out << str;
}

int	main(int ac, char** av) {
	if (ac != 4)
		ft_error("need 3 arguments");

	std::ifstream	in;
	std::ofstream	out;
	std::string	filename = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	if (filename.empty() || s1.empty() || s2.empty())
		ft_error("one or several arguments are empty");
	
	in.open(filename);
	if (!in)
		ft_error("file did't open");

	out.open("FILENAME.replace");
	ft_replace(in, out, s1, s2);
	in.close();
	out.close();
}
