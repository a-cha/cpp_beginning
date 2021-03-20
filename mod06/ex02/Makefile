CC:= clang++
CFLAGS := -Wall -Wextra -Werror
NAME := dynamic_cast

GREEN := "\033[32m"
STD := "\033[0m"

SRC := A.cpp		\
       B.cpp		\
       Base.cpp		\
       C.cpp		\
       main.cpp

all:
	@$(CC) $(CFLAGS) -o $(NAME) $(SRC)
	@echo Binary $(GREEN)$(NAME)$(STD) created

fclean:
	rm $(NAME)

re: fclean all
