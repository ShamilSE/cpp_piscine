NAME = a.out
SRC = main.cpp Peon.cpp Sorcerer.cpp Victim.cpp Monkey.cpp
INC = Peon.hpp Sorcerer.hpp Victim.hpp Monkey.hpp
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re