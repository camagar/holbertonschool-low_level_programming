#include "holberton.h"

/**
 * _isalpha - check the code for Holberton School students.
 *@c: is lowercase or uppercase
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
