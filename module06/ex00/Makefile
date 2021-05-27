NAME = convert
SRC = main.cpp Scalar.cpp
INC = Scalar.hpp

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME) -g

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re