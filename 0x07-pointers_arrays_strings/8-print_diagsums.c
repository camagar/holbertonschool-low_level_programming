#include "holberton.h"

/**
 * print_diagsums - print the sum of the two diagonals of a square matrix.
 * @a: pointer.
 * @size: Variable.
 * Return: .
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sa;
	int sb;

	sa = 0;
	sb = 0;
	for (i = 0; i < size * size;)
	{
		sa = sa + a[i];
		i = i + size + 1;
	}
	for (i = size - 1; i < (size * size) - 1;)
	{
		sb = sb + a[i];
		i = i + (size - 1);
	}
	printf("%d, %d\n", sa, sb);
}
