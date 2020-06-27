#include "holberton.h"

/**
 * rot13 - enconde the text to rot13.
 * @p: pointer.
 * Return: text encoding.
 */
char *rot13(char *p)
{
	int i, j;
	char rot1[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char rot2[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j <= 53; j++)
		{
			if (p[i] == rot1[j])
			{
				p[i] = rot2[j];
				break;
			}
		}
	}
	return (p);
}
