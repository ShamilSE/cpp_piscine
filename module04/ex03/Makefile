NAME = a.out
SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

INC = AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp Character.hpp \
	IMateriaSource.hpp MateriaSource.hpp

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME) -g

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re