NAME = a.out
SRC = main.cpp
INC = Base.hpp

CFLAGS = -Wall -Wextra -Werror

all: $(NAME) $(INC)

$(NAME): $(SRC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME) -g

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re