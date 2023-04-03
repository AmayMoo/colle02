NAME = colle-2

SRC = ./srcs/check_colle00.c ./srcs/check_colle01.c ./srcs/check_colle02.c ./srcs/check_colle03.c ./srcs/check_colle04.c ./srcs/util.c ./srcs/which_colle.c ./srcs/main.c ./srcs/putresult.c ./srcs/size.c

FLAGS = -Wall -Wextra -Werror
HEADER = ./includes

all:
	gcc $(FLAGS) -o $(NAME) -I$(HEADER) $(SRC)

clean:
	/bin/rm -f $(NAME)

fclean: clean

re: fclean	all
