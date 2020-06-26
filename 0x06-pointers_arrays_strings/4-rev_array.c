#include "holberton.h"

/**
 * reverse_array - reverse an array of integers.
 * @a: an array of integers.
 * @n: the number of elements to swap.
 * Return: array.
 */
void reverse_array(int *a, int n)
{
	int i, j, rev[1000];

	for (i = 0; i < n; i++)
	{
		rev[i] = a[i];
	}
	j = 0;
	while (j < n)
	{
		a[j] = rev[i - 1];
		i--;
		j++;
	}
}
