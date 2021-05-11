NAME = address
SRC = Brain.cpp Human.cpp main.cpp
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC) *.hpp
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re