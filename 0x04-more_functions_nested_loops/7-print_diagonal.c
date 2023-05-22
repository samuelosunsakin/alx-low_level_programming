#include "main.h"

/**
 * print_diagonal - Function that prints a diagonal on the screen
 * @n: Parameter that tells how long
 * Return: Void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i > 0)
			{
				for (j = 1; j <= i; j++)
				{
					_putchar(' ');
				}
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
