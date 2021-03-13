CC:= clang++
CFLAGS := -Wall -Wextra -Werror
NAME := array

GREEN := "\033[32m"
STD := "\033[0m"

all:
	@$(CC) $(CFLAGS) -o $(NAME) main.cpp
	@echo Binary $(GREEN)$(NAME)$(STD) created

run: all
	./$(NAME)

fclean:
	rm $(NAME)

re: fclean all