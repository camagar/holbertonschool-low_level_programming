#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - 2 dimensional array of integers.
 * @width: variable.
 * @height: height of the grid
 *
 * Return: int.
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			ptr[i] = malloc(sizeof(int) * width);
			if (ptr[i] == NULL)
			{
				for (i = i - 1; i >= 0; i--)
				{
					free(ptr[i]);
				}
				free(ptr);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				ptr[i][j] = 0;
			}
		}
	}
	return (ptr);
}
