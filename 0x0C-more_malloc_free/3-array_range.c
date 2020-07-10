#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - prints buffer in hexa
 * @min: minnimum
 * @max: maximum
 *
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *a;
	int i, j;

	j = 0;
	if (min > max)
	{
		return (NULL);
	}
	a = (int *)malloc(((max - min) + 1) * sizeof(int));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		a[j] = i;
		j++;
	}
	return (a);
}
