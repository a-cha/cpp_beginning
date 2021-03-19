CC:= clang++
CFLAGS := -Wall -Wextra -Werror
NAME := static_const

GREEN := "\033[32m"
STD := "\033[0m"

all:
	@$(CC) $(CFLAGS) -o $(NAME) main.cpp printTypes.cpp
	@echo Binary $(GREEN)$(NAME)$(STD) created

fclean:
	rm $(NAME)

re: fclean all
