#include "Scalar.hpp"

int main(int argc, char** argv) {
	if (argc == 2) {
		Scalar	scalar(argv[0]);
	}
	else
		std::cout << "invalid argument count" << std::endl;
	return 0;
}