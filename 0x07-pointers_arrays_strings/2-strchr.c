#include "holberton.h"

/**
 * _strchr - check the code for Holberton School students.
 * @s: pointer
 * @c: character variable
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for ( ; ; i++)
	{
		if (s[i] == c)
		{
		return (&(s[i]));
		}
		else if (!s[i])
		{
			return (NULL);
		}
	}

}
