#include "holberton.h"

/**
 * string_toupper - change letters from lowercase to uppercase
 * @p: pointer to string.
 * Return: uppercase.
 */
char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - 32;
		}
	}
	return (p);
}
