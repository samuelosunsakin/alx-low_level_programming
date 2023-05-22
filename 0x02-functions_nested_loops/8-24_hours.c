#include "main.h"

/**
 * jack_bauer - Program that prints all the minute
 * of the song
 * Return: Void
 */

void jack_bauer(void)
{
	int i, j, k, l, m, n;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			k = j % 10;
			l = j / 10;
			m = i % 10;
			n = i / 10;

			_putchar(48 + n);
			_putchar(48 + m);
			_putchar(':');
			_putchar(48 + l);
			_putchar(48 + k);
			_putchar('\n');
		}
	}
}
