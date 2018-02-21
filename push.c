/*
** EPITECH PROJECT, 2017
** push.c
** File description:
** push an ele of the list
*/

#include "my.h"
#include <stdlib.h>

int	space_or_n(s_list_t **firstB)
{
	if (*firstB != NULL) {
		my_putchar(' ');
		return (0);
	}
	return (0);
}

int	push_a(s_list_t **firstA, s_list_t **firstB)
{
	if (*firstA == NULL)
		return (0);
	if (*firstA == NULL) {
		(*firstA) = malloc(sizeof(s_list_t));
		(*firstA)->nbr = (*firstB)->nbr;
		(*firstA)->nxt = NULL;
		rm_first(firstB);
	} else {
		fill_head_top(firstA, (*firstB)->nbr);
		rm_first(firstB);
	}
	my_putstr("pa");
	space_or_n(firstB);
	return (0);
}

int	push_b(s_list_t **firstA, s_list_t **firstB)
{
	if (*firstA == NULL)
		return (0);
	if (*firstB == NULL) {
		(*firstB) = malloc(sizeof(s_list_t));
		(*firstB)->nbr = (*firstA)->nbr;
		(*firstB)->nxt = NULL;
		rm_first(firstA);
	} else {
		fill_head_top(firstB, (*firstA)->nbr);
		rm_first(firstA);
	}
	my_putstr("pb ");
	return (0);
}
