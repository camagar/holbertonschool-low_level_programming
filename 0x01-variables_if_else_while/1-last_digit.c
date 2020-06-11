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
	if (Ldig > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, Ldig);
	else if (Ldig == 0)
		printf("Last digit of %d is %d and is 0\n", n, Ldig);
	else if (Ldig < 6 && Ldig > 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Ldig);
	return (0);
}
