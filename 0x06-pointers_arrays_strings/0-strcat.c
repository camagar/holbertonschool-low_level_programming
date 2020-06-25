#include "holberton.h"

/**
 * _strcat - check the code for Holberton School students.
 * @dest: first pointer.
 * @src: Second pointer.
 * Return: new string.
 */
char *_strcat(char *dest, char *src)
{

	int i, j;

	i = 0;
	for (i = 0; *(dest + i) != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	return (dest);
}
