#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int a, b;

	while (b < 10)
	{
		for (a = 0; a < 15; a++)
		{
			if ((a / 10) > 0)
		{
			_putchar((a / 10) + '0');
		}
		_putchar((a % 10) + '0');
		}
		b++;
		_putchar('\n');
	}

}
