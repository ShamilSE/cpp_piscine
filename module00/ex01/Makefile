NAME = phonebook
SRC = main.cpp phonebook_utils.cpp Contact.cpp
all: $(NAME)
$(NAME): $(SRC) *.hpp
	clang++ -Wall -Wextra -Werror -o $(NAME) $(SRC) -g
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re