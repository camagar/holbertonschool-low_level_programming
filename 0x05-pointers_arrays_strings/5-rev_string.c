#include "holberton.h"

/**
 * rev_string - print reverse string.
 * @s: variable to print reverse string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, j;
	char k;

	if (*s == '\0')
	{
		return;
	}
	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	j = 0;
	while (i >= j)
	{
		i--;
		k = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = k;
		j++;
	}
}
