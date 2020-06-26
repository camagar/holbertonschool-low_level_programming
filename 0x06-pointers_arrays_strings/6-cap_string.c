#include "holberton.h"

/**
 * cap_string - check the code for Holberton School students.
 * @p: pointer
 * Return: string.
 */
char *cap_string(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] == '\n' || p[i] == '\t' || p[i] == ' '
		|| p[i] == ',' || p[i] == ';' || p[i] == '.' || p[i] == '!'
		|| p[i] == '?' || p[i] == '"' || p[i] == '(' || p[i] == ')'
		|| p[i] == '{' || p[i] == '}')
		{
			if (p[i + 1] >= 'a' && p[i + 1] >= 'z')
			{
				p[i + 1] = p[i + 1] - 32;
			}
		}
	}
	if (p[0] >= 'a' && p[0] <= 'z')
	{
		p[0] = p[0] - 32;
	}
	return (p);
}
