#include <stdio.h>

/**
 * main - Entry point
 * Description: Program that prints all possible
 * combination of three digits
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;
	int j, k;

	while (i < 10)
	{
		j = i + 1;

		while (j < 10)
		{
			k = j + 1;

			while (k < 10)
			{
				putchar(48 + i);
				putchar(48 + j);
				putchar(48 + k);

				if (i != 7)
				{
					putchar(',');
					putchar(32);
				}
				k++;
			}

			j++;
		}

		i++;
	}

	putchar(10);

	return (0);
}
