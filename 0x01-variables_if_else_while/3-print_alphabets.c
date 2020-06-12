#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alf, BT;

	for (alf = 'a'; alf <= 'z'; alf++)
		putchar(alf);
	for (BT = 'A'; BT <= 'Z'; BT++)
		putchar(BT);
	putchar('\n');
	return (0);
}
