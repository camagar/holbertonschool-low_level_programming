#include "holberton.h"

/**
 * puts_half - check the code for Holberton School students.
 * @str: string to print.
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; *(str + i) != '\0'; i++)
	{
	}
	for (j = (i / 2); j < i; j++)
	{
		_putchar(*(str + j));
	}
	_putchar(10);
}
