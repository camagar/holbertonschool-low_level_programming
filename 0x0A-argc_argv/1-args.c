#include "holberton.h"
#include <stdio.h>

/**
 * main - print its name.
 *  @argc: int
 *  @argv: Char
 *  Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
