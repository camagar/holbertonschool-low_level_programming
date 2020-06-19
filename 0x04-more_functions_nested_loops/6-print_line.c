#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: number for print lines
 * Return: Always 0.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
