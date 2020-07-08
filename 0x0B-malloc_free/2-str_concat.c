#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: the string.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[i] != '\0'; i++)
	{
	}
	concat = (char *)malloc((i + j + 1) * sizeof(char));

	if (concat != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			concat[i] = s1[i];
		}
		for (k = 0; s2[k] != '\0'; i++)
		{
			concat[i] = s2[k];
		}
	}
	else
	{
		return (NULL);
	}
	return (concat);
}
