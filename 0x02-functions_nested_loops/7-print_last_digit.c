#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 *@c: variable to check
 * Return: Always 0.
 */
int print_last_digit(int c)
{
	c = c % 10;
	if (c < 0)
		c = c * -1;
	return (c);
}
