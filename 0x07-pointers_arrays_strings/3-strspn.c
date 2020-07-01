#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - check the code for Holberton School students.
 * @s: pointer.
 * @accept: second pointer.
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int conts;
	unsigned int conta;
	unsigned int i;
	unsigned int j;
	unsigned int a;

	a = 0;
	for (conts = 0; s[conts] != '\0'; conts++)
	{
	}
	for (conta = 0; accept[conta] != '\0'; conta++)
	{
	}
	for (i = 0; i < conts; i++)
	{
		for (j = 0, a = 0; j < conta; i++)
		{
			if (s[i] == accept[j])
			{
				a++;
			}
		}
		if (a == 0)
		{
			return (i);
		}
	}
	return (i);
}
