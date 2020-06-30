#include "holberton.h"

/**
 * _memset - memory set function
 * @s: pointer
 * @b: variable to characters
 * @n: variable integer
 *
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
