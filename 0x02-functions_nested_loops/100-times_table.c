#include "holberton.h"

/**
 * print_times_table - print n tables
 *@n: n times
 * Return: n
 */
void print_times_table(int n)
{
	int a, i, j;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (i = 0; i <= n; i++)
			{
				j = a * i;
				if (j > 99 && j < 1000)
				{
					_putchar('0' + (j / 100));
					_putchar('0' + ((j / 10) % 10));
					_putchar('0' + (j % 10));
				}
				else
				{
					if (j > 9 && j <= 99)
					{
						_putchar(' ');
						_putchar((j / 10) + '0');
						_putchar((j % 10) + '0');
					}
					else
					{
						if (i == 0)
						{
							_putchar(j + '0');
						}
						else
						{
							_putchar(' ');
							_putchar(' ');
							_putchar(j + '0');
						}
					}
					if (i != n)
					{
				       _putchar(',');
				       _putchar(' ');
					}
			}
			_putchar ('\n');
		}
	}
}
