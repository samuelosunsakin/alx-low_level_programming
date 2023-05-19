#include <stdio.h>

/**
 * main - Entry point
 * Description: Program that prints the alphabets in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar(10);

	return (0);
}
