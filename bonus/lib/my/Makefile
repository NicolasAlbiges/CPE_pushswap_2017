##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## LIB printf 
##

SRC	=	my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -c $(SRC) -W -Wextra -Wall
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	make clean
	rm -f $(NAME)

re:
	fclean all
