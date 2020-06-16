#include "holberton.h"

/**
 * _islower - check the code for Holberton School students.
 *@c: 1 if c is lowercase or 0 if not
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
