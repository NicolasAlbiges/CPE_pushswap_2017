/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** pushswap file main
*/

#include "my.h"
#include <stdlib.h>

int	main(int ac, char **av)
{
	s_list_t *firstA = NULL;
	s_list_t *firstB = NULL;
	int ct = 1;

	while (ct != ac) {
		if (error(av[ct]) == 84 || my_error_nbr(av[ct]) == 84)
			return (84);
		ct ++;
	}
	fill_list(&firstA, av, ac);
	sort_nbr(&firstA, &firstB, 0);
	my_putchar('\n');
}
