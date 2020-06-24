#include "holberton.h"

/**
 * puts2 - print every other character from a string.
 * @str: pointer
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i, j;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	j = 0;
	while (j < i)
	{
		if (j % 2 == 0)
		{
			_putchar(*(str + j));
		}
		j++;
	}
	_putchar('\n');
}
