/*
** EPITECH PROJECT, 2017
** func_list.c
** File description:
** functions of the list
*/

#include "my.h"

int	fill_head_end(s_list_t **firstA, int nbra)
{
	s_list_t* actu = *firstA;

	while (actu->nxt != NULL)
		actu = actu->nxt;
	actu->nxt = malloc(sizeof(s_list_t));
	actu->nxt->nbr = nbra;
	actu->nxt->nxt = NULL;
	return (0);
}

int	fill_head_top(s_list_t **firstA, int nbra)
{
	s_list_t* new_ele = malloc(sizeof(s_list_t));

	new_ele->nbr = nbra;
	new_ele->nxt = * firstA;
	(*firstA) = new_ele;
	return (0);
}

int	rm_first(s_list_t **first)
{
	s_list_t* temp = NULL;

	temp = (*first)->nxt;
	free(*first);
	*first = temp;
	return (0);
}

int	rm_end(s_list_t **first)
{
	s_list_t* temp = *first;

	while (temp->nxt->nxt != NULL)
		temp = temp->nxt;
	free(temp->nxt);
	temp->nxt = NULL;
	return (0);
}

int	fill_list(s_list_t **firstA, char **av, int ac)
{
	int ct = 1;

	if(*firstA == NULL) {
		(*firstA) = malloc(sizeof(s_list_t));
		(*firstA)->nbr = my_sortnbr(av[ct]);
		(*firstA)->nxt = NULL;
		ct ++;
	}
	if (ac > 2) {
		while (ct < ac) {
			fill_head_end(firstA, my_sortnbr(av[ct]));
			ct ++;
		}
	}
	return (0);
}
