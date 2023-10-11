#include "main.h"

/**
 * _puts - Function that prints a string
 * @str: string parameter
 *
 * Return: Void
 */

void _puts(char *str)
{
	while (str)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
