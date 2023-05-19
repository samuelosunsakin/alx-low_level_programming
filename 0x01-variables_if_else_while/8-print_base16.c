#include <stdio.h>

/**
 * main - Entry point
 * Description: Program that prints the all the numbers
 * of base 16 in lower case
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;
	char c = 'a';

	while (i < 10)
	{
		putchar(48 + i);
		i++;
	}

	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar(10);

	return (0);
}
