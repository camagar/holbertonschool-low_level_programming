#include "holberton.h"

/**
 * *_strcpy - check the code for Holberton School students.
 * @dest: pointer 1.
 * @src: pointer 2.
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; *(src + i) != '\0'; i++)
	{
	}
	i++;
	j = 0;
	while (j < i)
	{
		*(dest + j) = *(src + j);
		j++;
	}
	return(&*dest);
}
