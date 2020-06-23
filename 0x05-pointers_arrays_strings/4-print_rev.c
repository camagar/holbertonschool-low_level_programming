#include "holberton.h"

/**
 * print_rev - print a string in reverse.
 * @s: pointer to print string in reverse.
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;
	char a;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	while (i > 0)
	{
		a = *(s + i);
		_putchar(a);
		i--;
	}
	_putchar('\n');
}
