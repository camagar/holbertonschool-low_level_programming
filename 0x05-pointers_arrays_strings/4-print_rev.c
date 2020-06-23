#include "holberton.h"

/**
 * print_rev - print a string in reverse.
 * @s: pointer to print string in reverse.
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
