#include "holberton.h"

/**
 * rev_string - print reverse string.
 * @s: variable to print reverse string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, j;
	int k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	j = 0;
	i--;
	while (i > j)
	{
		k = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = k;
		j++;
		i--;
	}
}
