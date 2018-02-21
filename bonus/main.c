/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** pushswap file main
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>

int	print_list_A(s_list_t **firstA)
{
	s_list_t* actu = *firstA;

	while (actu->nxt != NULL) {
		my_putstr("\nLA : ");
		my_put_nbr(actu->nbr);
		actu = actu->nxt;
	}
	my_putstr("\nLA : ");
	my_put_nbr(actu->nbr);
	my_putchar('\n');
	return (0);
}

int	print_list_B(s_list_t **firstB)
{
	s_list_t* actu = *firstB;

	if (*firstB == NULL) {
		my_putstr("\nThe list 'B' is empty.\n");
		return (0);
	}
	while (actu->nxt != NULL) {
		my_putstr("\nLB : ");
		my_put_nbr(actu->nbr);
		actu = actu->nxt;
	}
	my_putstr("\nLB : ");
	my_put_nbr(actu->nbr);
	my_putchar('\n');
	return (0);
}

int	print_lists(s_list_t **firstA, s_list_t **firstB)
{
	my_putstr("\n----------------------------\n");
	print_list_A(firstA);
	print_list_B(firstB);
	my_putstr("----------------------------\n");
	return (0);
}

int	main(int ac, char **av)
{
	s_list_t *firstA = NULL;
	s_list_t *firstB = NULL;
	int ct = 1;

	if (av[1][0] == '-' && av[1][1] == 'v')
		ct ++;
	while (ct != ac) {
		if (error(av[ct]) == 84 || my_error_nbr(av[ct]) == 84)
			return (84);
		ct ++;
	}
	fill_list(&firstA, av, ac);
	if (av[1][0] == '-' && av[1][1] == 'v')
		sort_nbr_p(&firstA, &firstB, 0);
	else
		sort_nbr(&firstA, &firstB, 0);
	print_list_A(&firstA);
}
