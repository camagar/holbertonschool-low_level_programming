#include "holberton.h"

/**
 * _strncat - check the code for Holberton School students.
 * @dest: first pointer.
 * @src: second pointer.
 * @n: variable to count.
 * Return: dest string.
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

	i = 0;
	for (i = 0; *(dest + i) != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	return (dest);

}
