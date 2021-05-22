NAME = a.out
SRC = main.cpp AMateria.cpp Ice.cpp Character.cpp
INC = AMateria.hpp Ice.hpp ICharacter.hpp Character.hpp
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME) -g

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re