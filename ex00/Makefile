NAME = colle-2

SRC = ./srcs/main.c ./srcs/util.c

FLAGS = -Wall -Wextra -Werror
HEADER = ./includes

all:
	gcc $(FLAGS) -o $(NAME) -I$(HEADER) $(SRC)

clean:
	/bin/rm -f $(NAME)

fclean: clean

re: fclean	all
