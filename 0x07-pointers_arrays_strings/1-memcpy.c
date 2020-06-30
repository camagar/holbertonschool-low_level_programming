#include "holberton.h"

/**
 * _memcpy - Copy memory area
 * @dest: first pointer
 * @src: Secon pointer
 * @n: variable
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char bag[1000];

	for (i = 0; i < n; i++)
	{
		bag[i] = src[i];
		dest[i] = bag[i];
	}
	return (dest);
}
