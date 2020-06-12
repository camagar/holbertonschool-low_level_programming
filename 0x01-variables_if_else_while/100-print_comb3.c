#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; b <= 8; a++)
	{
		for (b = 0; b <  10; b++)
		{
			if (b == 0)
				b = b + a + 1;
			putchar (a + '0');
			putchar (b + '0');
			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
