#include <stdio.h>
#include <stdlib.h>

/**
 * main - make change for an amount of money
 *@argc: number
 *@argv: string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int money;
	int j;
	int a;
	int values[5] = {25, 10, 5, 2, 1};

	a = 0;
	money = 0;

	if (argc == 2)
	{
		for (j = 0; j <= 4; j++)
		{
			if (atoi(argv[1]) >= values[j])
			{
				money = atoi(argv[1]) / values[j];
				a = atoi(argv[1]) % values[j];
				break;
			}
		}

		for (j = 0; j <= 4; j++)
		{
			if (a >= values[j])
			{
				money++;
				a -= values[j];
				j = 0;
			}
		}
	} else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", money);
	return (0);
}
