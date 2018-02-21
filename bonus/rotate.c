/*
** EPITECH PROJECT, 2017
** rotate.c
** File description:
** rotate ele of a list
*/

#include "my.h"

int	rotate_a(s_list_t **firstA)
{
	fill_head_end(firstA, (*firstA)->nbr);
	rm_first(firstA);
	my_putstr("ra ");
	return (0);
}

int	rotate_b(s_list_t **firstB)
{
	fill_head_end(firstB, (*firstB)->nbr);
	rm_first(firstB);
	my_putstr("rb ");
	return (0);
}

int	rotate_r(s_list_t **firstA, s_list_t **firstB)
{
	rotate_a(firstA);
	rotate_b(firstB);
	my_putstr("rr ");
	return (0);
}
