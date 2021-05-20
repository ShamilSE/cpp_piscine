NAME = a.out
SRC = main.cpp AssaultTerminator.cpp Squad.cpp TacticalMarine.cpp
INC = ISquad.hpp ISpaceMarine.hpp AssaultTerminator.hpp Squad.hpp TacticalMarine.hpp
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME) -g

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re