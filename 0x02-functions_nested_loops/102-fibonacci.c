#include <stdio.h>

/**
 * main - Progam to print the first
 * fifty fibonacci sequence
 * Return: 0
 */

int main(void)
{
	int i;
	long int sum, k, j;

	j = 0;
	k = 1;

	for (i = 0; i < 50; i++)
	{
		sum = k + j;
		if (i != 49)
		{
			printf("%lu, ", sum);
			j = k;
			k = sum;
		}
		else
			printf("%lu", sum);
	}

	printf("\n");

	return (0);
}
