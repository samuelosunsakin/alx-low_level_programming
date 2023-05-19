#include <stdio.h>

/**
 * main - Entry point
 * Description: Program that prints different
 * combination of two digits
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = i + 1;

		while (j < 10)
		{
			putchar(48 + i);
			putchar(48 + j);

			if (i != 8)
			{
				putchar(',');
				putchar(32);
			}
			j++;
		}

		i++;
	}

	putchar(10);

	return (0);
}
