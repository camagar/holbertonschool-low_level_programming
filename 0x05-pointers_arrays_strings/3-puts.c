#include "holberton.h"

/**
 * _puts - print a string followed by a new line.
 * @str: variable for print a string.
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;
	char a;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		a = *(str + i);
		_putchar(a);
	}
	_putchar(10);
}
