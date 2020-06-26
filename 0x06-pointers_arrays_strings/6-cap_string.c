#include "holberton.h"

/**
 * cap_string - check the code for Holberton School students.
 * @p: pointer
 * Return: string.
 */
char *cap_string(char *p)
{
	int i;

	i = 0;
	while (p[i] != '\0')
	{
		if (p[i] == ' ' || p[i] == ';' || p[i] == '\n' || p[i] == '\t'
		    || p[i] == ',' || p[i] == '.' || p[i] == '!' || p[i] == '?'
		    || p[i] == '"' || p[i] == '(' || p[i] == ')' ||
		    p[i] == '{' || p[i] == '}')
			if (p[i + 1] >= 'a' && p[i + 1] <= 'z')
			p[i + 1] = p[i + 1] - 32;
		i++;
	}
	if (p[0] >= 'a' && p[0] <= 'z')
		p[0] = p[0] - 32;

	return (p);
}
