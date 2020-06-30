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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
		else if (!s[i])
		{
			return (NULL);
		}
	}
	return (&(s[i]));
}
