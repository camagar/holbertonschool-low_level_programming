#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers.
 * @separator: pointer.
 * @n: first variable.
 *
 * Return: numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, a;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(numbers, unsigned int);
		printf("%d", a);
		if (separator != NULL && i != (n - 1))
		{
			printf("%c", *separator);
		}
	}
	printf("\n");
	va_end(numbers);
}
