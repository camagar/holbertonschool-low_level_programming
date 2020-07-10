#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments.
 * @ac: variable.
 * @av:double pointer
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, n, k;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			n++;
		}
	}
	ptr = malloc(sizeof(char) * ac + n + 1);
	if (ptr == '\0')
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			ptr[k] = av[i][j];
			k++;
			j++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = 0;
	return (ptr);
}
