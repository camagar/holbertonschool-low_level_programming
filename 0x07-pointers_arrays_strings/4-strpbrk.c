#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string.
 * @s: first pointer.
 * @accept: second pointer.
 * Return: .
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	char *add = NULL;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (add == NULL)
				{
					add = &(s[j]);
				}
				if (&(s[j]) < add)
				{
					add = &(s[j]);
				}
			}
		}
	}
	return (add);
}
