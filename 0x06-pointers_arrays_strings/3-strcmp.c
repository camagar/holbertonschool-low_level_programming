#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - func. to compare two strings.
 * @s1: first pointer.
 * @s2: second pointer.
 * Return: number of the diference.
 */
int _strcmp(char *s1, char *s2)
{
int i, cmp = 0;

for (i = 0; s1[i] != '\0'; i++)
{
	if (s1[i] - s2[i] != 0)
	{
		cmp = s1[i] - s2[i];
		break;
	}
}
if (cmp == 0 && s1[i] == '\0')
{
	cmp = s1[i] - s2[i];
}
return (cmp);
}
