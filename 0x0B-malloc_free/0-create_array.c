#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @c: char data type.
 * @size: the size of the memory to print
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		a = (char *)malloc(size * sizeof(char));
		if (a != NULL)
		{
			for (i = 0; i < size; i++)
			{
				a[i] = c;
			}
		}
		else if (a == NULL)
		{
			return (NULL);
		}
	}
	return (a);
}
