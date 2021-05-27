#include "Scalar.hpp"

int main(int argc, char** argv) {
	if (argc != 2) {
		std::cout << "invalid argument count" << std::endl;
		return 0;
	}

	Scalar	scalar(argv[1]);
	// std::cout << scalar.getC() << std::endl;
	

	return 0;
}