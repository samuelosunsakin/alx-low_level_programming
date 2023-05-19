#include <stdio.h>

/**
 * main - Entry point
 * Description: Program that prints all the numbers of base 10
 * using putchar function
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
		i++;
	}
	putchar(10);

	return (0);
}
