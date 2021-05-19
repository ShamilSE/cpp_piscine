NAME = a.out

SRC = main.cpp AWearpon.cpp PlasmaRiffle.cpp PowerFist.cpp \
	Enemy.cpp SuperMutant.cpp RadScorpion.cpp Character.cpp

INC = AWearpon.hpp AWearpon.hpp PlasmaRiffle.hpp PowerFist.hpp \
	Enemy.hpp SuperMutant.hpp RadScorpion.hpp Character.hpp

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME) -g

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re