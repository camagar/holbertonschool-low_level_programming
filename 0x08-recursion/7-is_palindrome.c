#include "holberton.h"
/**
*length - length
*@s: string
*Return: length
*/
int length(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		return (length(s + 1) + i);
	}
	return (i);
}
/**
 *verify - function
 *@a: variable
 *@i: variable
 *@s: string
 *Return: always to 0
 */
int verify(int a, int i, char *s)
{
	if (a >= i)
	{
		return (1);
	}
	else if (s[a] == s[i])
	{
		return (verify(a + 1, i - 1, s));
	}
	else
	{
		return (0);
	}
}
/**
 *is_palindrome - return 1 if is number prime
 *@s: number to evaluate
 *Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int i = length(s);
	int a = 0;

	return (verify(a, i - 1, s));
}
