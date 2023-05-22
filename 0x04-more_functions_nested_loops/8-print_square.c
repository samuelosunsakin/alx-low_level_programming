#include "main.h"

/**
 * print_square - Function that prints a square
 * @size: Parameter that tells the size
 * Return: Void
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		if (size > 1)
		{
			for (i = 0; i < size; i++)
			{
				for (j = 0; j < size; j++)
				{
					_putchar(35);
				}
				_putchar(10);
			}
		}
		else
		{
			_putchar(35);
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
