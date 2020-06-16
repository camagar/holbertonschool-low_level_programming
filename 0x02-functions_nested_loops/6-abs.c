#include "holberton.h"

/**
 * _abs - check the code for Holberton School students.
 *@c: Variable to check
 * Return: Always 0.
 */
int _abs(int c)
{

	if (c > 0)
		return (c);
	else if (c < 0)
		return (c * -1);
	else
		return (0);
}
