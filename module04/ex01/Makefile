NAME = a.out
SRC = main.cpp AWearpon.cpp PlasmaRiffle.cpp PowerFist.cpp Enemy.cpp SuperMutant.cpp RadScorpion.cpp
INC = AWearpon.hpp AWearpon.hpp PlasmaRiffle.hpp PowerFist.hpp Enemy.hpp SuperMutant.hpp RadScorpion.hpp
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re