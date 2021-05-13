NAME = violence
SRC = Wearpon.cpp HumanA.cpp HumanB.cpp main.cpp
INC = Wearpon.hpp HumanA.hpp HumanB.hpp
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME) -g

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re