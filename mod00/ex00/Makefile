
CC:= clang++
CFLAGS := -Wall -Wextra -Werror
NAME := megaphone

GREEN := "\033[32m"
STD := "\033[0m"

all:
	@$(CC) $(CFLAGS) -o $(NAME) megaphone.cpp
	@echo Binary $(GREEN)$(NAME)$(STD) created

fclean:
	rm $(NAME)

re: fclean all
