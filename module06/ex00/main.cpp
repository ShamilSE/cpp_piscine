#include "Scalar.hpp"

int main(int argc, char** argv) {
	if (argc != 2) {
		std::cout << "invalid argument count" << std::endl;
		return 0;
	}

	Scalar	scalar(argv[1]);

	scalar.printChar();
	scalar.printInt();
	scalar.printFloat();
	scalar.printDouble();
	
	return 0;
}