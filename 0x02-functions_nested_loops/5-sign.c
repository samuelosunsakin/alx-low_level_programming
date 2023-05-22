#include "main.h"

/**
 * print_sign - Program that prints the
 * sign of a number
 * @n: parameter that checks the number
 * Return: Returns 1 if positive, 0 if zero
 * and -1 if negative.
 */

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}

	else if (n == 0)
	{
		i = 0;
		_putchar('0');
	}

	else
	{
		i = -1;
		_putchar('-');
	}

	return (i);
}
