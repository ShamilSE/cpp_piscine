NAME = claptrap
SRC = FragTrap.cpp main.cpp ScavTrap.cpp ClapTrap.cpp NinjaTrap.cpp
INC = FragTrap.hpp ScavTrap.hpp ClapTrap.hpp NinjaTrap.hpp
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME) -g

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re