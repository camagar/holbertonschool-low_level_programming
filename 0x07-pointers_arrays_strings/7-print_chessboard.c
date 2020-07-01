#include "holberton.h"

/**
 * print_chessboard - print the chessboard.
 * @a: pointer.
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i;
	unsigned int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; i++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
