/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** show my string
*/

#include"my.h"

int	my_putstr(char *str)
{
	int a = 0;

	while (str[a] != '\0') {
		my_putchar(str[a]);
		a = a + 1;
	}
	return (0);
}
