#include "holberton.h"
#include <stdio.h>

/**
 * factorial - factorial of a number.
 * @n: number to calculate.
 * Return: the factorial.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (0);
}
