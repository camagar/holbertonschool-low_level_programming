#include "holberton.h"
#include <stdio.h>

/**
 * set_string - set a value of a pointer.
 * @s: double pointer.
 * @to: pointer.
 * Return: .
 */
void set_string(char **s, char *to)
{
	*s = to;
}
