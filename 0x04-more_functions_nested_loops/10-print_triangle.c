#include "main.h"

/**
 * print_triangle - Function that prints a
 * triangle on the terminal
 * @size: Parameter that tells the size
 * Return: Void
 */

void print_triangle(int size)
{
	int i, h, s;

	if (size > 0)
	{
		if (size > 1)
		{
			for (i = 0; i < size; i++)
			{
				h = i + 1;
				s = size - h;
				print_space(s);
				print_hash(h);
				_putchar(10);
			}
		}
		else
		{
			print_hash(1);
			_putchar(10);
		}
	}
	else
		_putchar(10);
}

/**
 * print_hash - Function that prints #
 * @n: Parameter that tells how much
 * Return: Void
 */

void print_hash(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar(35);
		}
	}
}

/**
 * print_space - Function that prints space
 * @z: Parameter that tells how much
 * Return: Void
 */

void print_space(int z)
{
	int y;

	if (z > 0)
	{
		for (y = 0; y < z; y++)
		{
			_putchar(' ');
		}
	}
}
