#include "main.h"

/**
 * times_table - Function that prints
 * the 9 times table
 * Return: Void
 */

void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (k > 9)
			{
				l = k % 10;
				m = k / 10;
				_putchar(48 + m);
				_putchar(48 + l);
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(48 + k);
			}
			else
				_putchar(48 + k);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(10);
			}
		}
	}
}
