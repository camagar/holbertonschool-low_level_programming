#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy the string.
 * @str: string.
 * Return: a pointer.
 */
char *_strdup(char *str)
{
	char *cpy;
	int i, j;

	j = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
		}
		cpy = (char *)malloc((i + 1) * sizeof(char));
		if (cpy == NULL)
		{
			return (NULL);
		}
		else
		{
			while (j < i)
			{
				cpy[j] = str[j];
				j++;
			}
			cpy[j] = '\0';
		}
	}
	return (cpy);
}
