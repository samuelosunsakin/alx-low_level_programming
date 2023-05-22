#include "main.h"

/**
 * print_most_numbers - Function that prints numbers from 0
 * to 9 except 2 and 4
 * Return: Void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i == 2) || (i == 4))
		{
			continue;
		}
		else
			_putchar(48 + i);
	}
	_putchar(10);
}
