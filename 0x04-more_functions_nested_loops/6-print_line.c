#include "main.h"

/**
 * print_line - Function that prints a straight line
 * on the screen
 * @n: Parameter that tells how long the line is
 * Return: Void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar(10);
}
