#include "holberton.h"

/**
 * _strlen_recursion - length of a string.
 * @s: pointer to string
 * Return: length.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
