#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n: number to print
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int a, b;
	char k, s;

	k = '\\';
	s = ' ';
	for (a = 0; a < n; a++)
	{
		if (n > 1)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(s);
			}
			_putchar(k);
			_putchar('\n');
		}
	}
		if (n <= 0)
		{
			_putchar('\n');
		}
}
