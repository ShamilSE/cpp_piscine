NAME = a.out
SRC = main.cpp AssaultTerminator.cpp
INC = ISquad.hpp ISpaceMarine.hpp AssaultTerminator.hpp
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re