/*
** EPITECH PROJECT, 2017
** swap.c
** File description:
** swap the element of a list
*/

#include "my.h"

int	swap_a(s_list_t **firstA)
{
	s_list_t* temp = (*firstA)->nxt->nxt;

	if (((*firstA)->nxt) == NULL)
		return (0);
	(*firstA)->nxt->nxt = *firstA;
	*firstA = (*firstA)->nxt;
	(*firstA)->nxt->nxt = temp;
	my_putstr("sa ");
	return (0);
}

int	swap_b(s_list_t **firstA)
{
	s_list_t* temp = (*firstA)->nxt->nxt;

	if (((*firstA)->nxt) == NULL)
		return (0);
	(*firstA)->nxt->nxt = *firstA;
	*firstA = (*firstA)->nxt;
	(*firstA)->nxt->nxt = temp;
	my_putstr("sb ");
	return (0);
}

int	swap_c(s_list_t **firstA, s_list_t **firstB)
{
	swap_b(firstA);
	swap_a(firstB);
	my_putstr("sc ");
	return (0);
}
