#include "holberton.h"

/**
 * _strstr - locates a substring.
 * @haystack: first pointer.
 * @needle: second pointer.
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	char *pntn;
	char *pnth;

	pnth = needle;
	for (; *haystack != 0; haystack++)
	{
		for (pntn = needle, pnth = haystack; *pntn == *pnth && *pntn; pntn++, pnth++)
		{
		}
		if (*pntn == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
