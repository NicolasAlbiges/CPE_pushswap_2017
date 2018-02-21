
/*
** EPITECH PROJECT, 2017
** sort.c
** File description:
** sort number from list
*/

#include "my.h"
#include <stdlib.h>

int	sort_four(s_list_t **firstA, s_list_t **firstB)
{
	s_list_t* last_B = *firstB;

	if ((*firstB)->nxt == NULL) {
		push_a(firstA, firstB);
		return (0);
	}
	while (last_B->nxt != NULL)
		last_B = last_B->nxt;
	while (*firstB != NULL) {
		if ((*firstB)->nbr < last_B->nbr) {
			rotate_r_b(firstB);
			push_a(firstA, firstB);
		}
		else
			push_a(firstA, firstB);
	}
	return (0);
}

int	sort_three(s_list_t **firstA, s_list_t **firstB)
{
	push_b(firstA, firstB);
	if ((*firstB)->nxt == NULL)
		return (0);
	if ((*firstB)->nbr < (*firstB)->nxt->nbr)
		rotate_b(firstB);
	return (0);
}

int	sort_two(s_list_t **firstA, s_list_t **firstB)
{
	swap_a(firstA);
	push_b(firstA, firstB);
	if ((*firstB)->nxt == NULL)
		return (0);
	if ((*firstB)->nbr < (*firstB)->nxt->nbr){
		rotate_b(firstB);
	}
	return (0);
}

int	sort_one(s_list_t **firstA, s_list_t **firstB)
{
	while ((*firstA)->nxt != NULL) {
		if ((*firstA)->nbr > (*firstA)->nxt->nbr)
			sort_two(firstA, firstB);
		else
			sort_three(firstA, firstB);
	}
	if (*firstB != NULL)
		sort_four(firstA, firstB);
	return (0);
}

int	sort_nbr(s_list_t **firstA, s_list_t **firstB, int b)
{
	s_list_t* actu = *firstA;

	while (actu != NULL) {
		if (actu->nxt != NULL && actu->nbr > actu->nxt->nbr && b == 0) {
			sort_one(firstA, firstB);
			sort_nbr(firstA, firstB, 1);
		}
		if (actu->nxt != NULL && actu->nbr > actu->nxt->nbr && b == 1) {
			my_putchar(' ');
			sort_one(firstA, firstB);
			sort_nbr(firstA, firstB, 1);
		}
		actu = actu->nxt;
	}
	return (0);
}
