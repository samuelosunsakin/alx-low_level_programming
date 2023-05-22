#include "main.h"

/**
 * more_numbers - Function that prints number 0 - 14
 * ten times
 * Return: Void
 */

void more_numbers(void)
{
	int i, j, c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			c = j;
			if (j > 9)
			{
				_putchar('1');
				c = j % 10;
			}
			_putchar(48 + c);
		}
		_putchar(10);
	}
}
