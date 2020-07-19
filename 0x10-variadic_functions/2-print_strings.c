#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings.
 * @separator: pointer.
 * @n: first variable.
 *
 * Return: string.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *p;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(strings, char *);
		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}
		if (*separator && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(strings);
	printf("\n");
}
