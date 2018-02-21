/*
** EPITECH PROJECT, 2017
** rotate_pls.c
** File description:
** rotate more than other with list
*/

#include "my.h"

int	rotate_r_a(s_list_t **firstA)
{
	s_list_t* last_A = *firstA;

	while (last_A->nxt != NULL)
		last_A = last_A->nxt;
	fill_head_top(firstA, last_A->nbr);
	rm_end(firstA);
	my_putstr("rra ");
	return (0);
}

int	rotate_r_b(s_list_t **firstB)
{
	s_list_t* last_B = *firstB;

	while (last_B->nxt != NULL)
		last_B = last_B->nxt;
	fill_head_top(firstB, last_B->nbr);
	rm_end(firstB);
	my_putstr("rrb ");
	return (0);
}

int	rotate_r_r(s_list_t **firstA, s_list_t **firstB)
{
	rotate_r_a(firstA);
	rotate_r_b(firstB);
	my_putstr("rrr ");
	return (0);
}
