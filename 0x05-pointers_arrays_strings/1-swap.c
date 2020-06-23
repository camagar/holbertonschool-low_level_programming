#include "holberton.h"

/**
 * swap_int - check the code for Holberton School students.
 * @a: first variable
 * @b: second variable
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int a1, a2;

	a1 = *a;
	a2 = *b;

	*a = a2;
	*b = a1;
}
