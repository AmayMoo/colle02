NAME = colle-2
NAME00 = colle-00
NAME01 = colle-01
NAME02 = colle-02
NAME03 = colle-03
NAME04 = colle-04

SRC = ./srcs/check_colle00.c ./srcs/check_colle01.c ./srcs/check_colle02.c ./srcs/check_colle03.c ./srcs/check_colle04.c ./srcs/util.c ./srcs/which_colle.c ./srcs/main.c ./srcs/putresult.c ./srcs/size.c

SRC_COLLE00 = ./colle_00/ex00/main.c ./colle_00/ex00/ft_putchar.c ./colle_00/ex00/colle00.c

SRC_COLLE01 = ./colle_00/ex00/main.c ./colle_00/ex00/ft_putchar.c ./colle_00/ex00/colle01.c

SRC_COLLE02 = ./colle_00/ex00/main.c ./colle_00/ex00/ft_putchar.c ./colle_00/ex00/colle02.c

SRC_COLLE03 = ./colle_00/ex00/main.c ./colle_00/ex00/ft_putchar.c ./colle_00/ex00/colle03.c

SRC_COLLE04 = ./colle_00/ex00/main.c ./colle_00/ex00/ft_putchar.c ./colle_00/ex00/colle04.c


FLAGS = -Wall -Wextra -Werror
HEADER = ./includes

all: colle00 colle01 colle02 colle03 colle04 colle2

clean:
	/bin/rm -f $(NAME) $(NAME00) $(NAME01) $(NAME02) $(NAME03) $(NAME04)

fclean: clean

re: fclean	all

colle00:
	gcc $(FLAGS) -o $(NAME00) $(SRC_COLLE00)

colle01: 
	gcc $(FLAGS) -o $(NAME01) $(SRC_COLLE01)

colle02: 
	gcc $(FLAGS) -o $(NAME02) $(SRC_COLLE02)

colle03: 
	gcc $(FLAGS) -o $(NAME03) $(SRC_COLLE03)

colle04: 
	gcc $(FLAGS) -o $(NAME04) $(SRC_COLLE04)

colle2:
	gcc $(FLAGS) -o $(NAME) -I$(HEADER) $(SRC)
