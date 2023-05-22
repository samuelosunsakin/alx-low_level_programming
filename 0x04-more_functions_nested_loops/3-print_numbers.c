#include "main.h"

/**
 * print_numbers - Function that prints the numbers
 * from 0 - 9
 * Return: Void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(48 + i);
	}
	_putchar(10);
}
