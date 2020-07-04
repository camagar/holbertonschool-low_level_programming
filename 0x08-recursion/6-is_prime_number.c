#include "holberton.h"
/**
 *verifica - power
 *@n: variable
 *@a: variable
 *Return: compare
 */
int verifica(int n, int a)
{
	int i = 0;

	if (a <= n)
	{
		if (n % a == 0)
			i++;
		return (i + verifica(n, a + 1));
	}
	return (i);
}
/**
*is_prime_number - prime number
*@n: variable
*Return: 0
*/
int is_prime_number(int n)
{
	if (verifica(n, 1) == 2)
		return (1);
	else
		return (0);
}
