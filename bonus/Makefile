##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile for my_printf
##

CFLAGS	=	-I./include -W -Wall -Wextra -lcriterion -g3

SRC	=	main.c		\
		func_list.c		\
		push.c		\
		rotate.c		\
		rotate_pls.c		\
		swap.c		\
		sort.c		\
		sort_print.c		\
		error.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my
	gcc -o $(NAME) $(OBJ) -L./lib/my -lmy -lm
clean:
	rm -f $(OBJ)
	make clean -C ./lib/my

fclean:	clean
	rm -f $(NAME)
	make fclean -C ./lib/my

re:	fclean all
