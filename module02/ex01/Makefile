NAME = fixed
SRC = Fixed.cpp main.cpp
INC = Fixed.hpp
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re
