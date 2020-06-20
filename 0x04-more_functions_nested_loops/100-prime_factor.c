#include <stdlib.h>
#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: no return
 */
int main(void)
{
	long int a, b, i;

	a = 612852475143;

	for (i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			if (a == i)
			{
				printf("%ld\n", i);
				break;
			}
			b = a / i;
			a = b;
			i = 1;
		}
	}
	return (0);
}
