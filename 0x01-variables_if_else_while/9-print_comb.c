#include <stdio.h>

/**
 * main - Entry point
 * Description: Program that prints all the
 * possible combinations of single digit numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
		if (i != 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar(10);

	return (0);
}
