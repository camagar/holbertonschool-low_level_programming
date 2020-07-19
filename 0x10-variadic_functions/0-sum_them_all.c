#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all
 * @n: first variable
 *
 * Return: 0 if n==0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list s_list;
	unsigned int i, a = 0;

	va_start(s_list, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		a += va_arg(s_list, unsigned int);
	}
	va_end(s_list);

	return (a);
}
