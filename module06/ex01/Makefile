NAME = a.out
SRC = main.cpp

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME) -g

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re