/*
** EPITECH PROJECT, 2017
** error.c
** File description:
** gestion of errors and sortnbr
*/

#include "my.h"
#include <limits.h>

int	my_error_nbr(char *str)
{
	int sign = 1;
	int ct = 0;
	long result = 0;

	while (str[ct] == '+' || str[ct] == '-') {
		if (str[ct] == '-')
			sign = sign * -1;
		ct ++;
	}
	while (str[ct] != '\0') {
		if (str[ct] < 48 || str[ct] > 57)
			return (84);
		result = result * 10 + (str[ct] - 48);
		ct ++;
		if (result * sign < INT_MIN || result * sign > INT_MAX)
			return (84);
	}
	return (0);
}

int	my_sortnbr(char *str)
{
	int sign = 1;
	int ct = 0;
	long result = 0;

	while (str[ct] == '+' || str[ct] == '-') {
		if (str[ct] == '-')
			sign = sign * -1;
		ct ++;
	}
	while (str[ct] != '\0') {
		if (str[ct] < 48 || str[ct] > 57)
			return (0);;
		result = result * 10 + (str[ct] - 48);
		ct ++;
		if (result * sign < INT_MIN || result * sign > INT_MAX)
			return (0);
	}
	return (result * sign);
}

int	error(char *av)
{
	int ct = 0;

	while (av[ct] != '\0') {
		if (av[ct] < 43 || (av[ct] > 43 && av[ct] < 45)
		|| (av[ct] > 45 && av[ct] < 48) || av[ct] > 57)
			return (84);
		ct ++;
	}
	return (0);
}
