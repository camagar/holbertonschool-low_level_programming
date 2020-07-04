#include "holberton.h"

/**
 * raiz_cuadrada - Power.
 * @n: variable.
 * @a: variable
 * Return: square root.
 */
int raiz_cuadrada(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	else if (a * a == n)
	{
		return (a);
	}
	return (raiz_cuadrada(n, a + 1));
}
/**
 * _sqrt_recursion - square root.
 * @n: variable.
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (raiz_cuadrada(n, 1));
}
