#include "main.h"

/**
 * print_last_digit - Program that prints the last digit
 * of a number
 * @n: Parameter that holds the number
 * Return: Returns the last digit
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
		i = -i;
	_putchar(48 + i);

	return (i);
}
