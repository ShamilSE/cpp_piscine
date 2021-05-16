NAME = claptrap
SRC = FragTrap.cpp main.cpp ScavTrap.cpp ClapTrap.cpp
INC = FragTrap.hpp ScavTrap.hpp ClapTrap.hpp
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME) -g

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re