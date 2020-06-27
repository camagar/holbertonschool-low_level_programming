#include "holberton.h"

/**
 * leet - change some letters.
 * @p: pointer.
 * Return: Always 0.
 */
char *leet(char *p)
{
	int i, j;
	char Leet1[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char Leet2[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (p[i] == Leet1[j])
			{
				p[i] = Leet2[j];
			}
		}
	}
	return (p);
}
