#include "main.h"

/**
 * _puts_recursion - Function that prints a string
 * @s: Parameter
 *
 * Return: Void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
		_putchar(*s);

	return (0);
}
