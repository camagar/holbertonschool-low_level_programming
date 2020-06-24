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
	i++;
	if (i % 2 == 1)
	{
		j = (i - 1) / 2;
	}
	else
	{
		j = i / 2;
	}
	while (j < i - 1)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar(10);
}
