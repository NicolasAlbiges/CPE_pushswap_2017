/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my.h
*/

#include<stdlib.h>

#ifndef MY_H

#define MY_H

typedef struct s_list
{
	int nbr;
	struct s_list *nxt;
}s_list_t;

int	my_getnbr(char *str);
int	my_putchar(char c);
int	my_put_nbr(int nb);
int	my_putstr(char *str);
int	fill_head_end(s_list_t **firstA, int nbra);
int	fill_head_top(s_list_t **firstA, int nbra);
int	push_a(s_list_t **firstA, s_list_t **firstB);
int	push_b(s_list_t **firstA, s_list_t **firstB);
int	rm_first(s_list_t **firstA);
int	rm_end(s_list_t **firstA);
int	rotate_a(s_list_t **firstA);
int	rotate_b(s_list_t **firstB);
int	rotate_r(s_list_t **firstA, s_list_t **firstB);
int	rotate_r_a(s_list_t **firstA);
int	rotate_r_b(s_list_t **firstB);
int	rotate_r_r(s_list_t **firstA, s_list_t **firstB);
int	fill_list(s_list_t **firstA, char **av, int ac);
int	swap_a(s_list_t **firstA);
int	swap_b(s_list_t **firstA);
int	swap_c(s_list_t **firstA, s_list_t **firstB);
int	sort_four(s_list_t **firstA, s_list_t **firstB);
int	sort_three(s_list_t **firstA, s_list_t **firstB);
int	sort_two(s_list_t **firstA, s_list_t **firstB);
int	sort_nbr(s_list_t **firstA, s_list_t **firstB, int b);
int	space_or_n(s_list_t **firstB);
int	error(char *av);
int	my_sortnbr(char *str);
int	my_error_nbr(char *str);

#endif
