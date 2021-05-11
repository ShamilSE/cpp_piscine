NAME = ex04
SRC = ex04.cpp
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re