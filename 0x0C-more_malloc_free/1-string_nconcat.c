#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: variable
 * Return: pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n >= j)
	{
		n = j;
	}
	concat = (char *)malloc((i + j + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	concat[i] = '\0';
	return (concat);
}
