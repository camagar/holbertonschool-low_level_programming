#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, Ldig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Ldig = n % 10;
	printf("Last digit of %d is %d ", n, Ldig);
	if (Ldig > 5)
		printf("and is greater than 5\n");
	else if (Ldig == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
