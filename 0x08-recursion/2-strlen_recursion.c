#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: Pointer to string
 *
 * Return: Void
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s[i] != '\0')
	{
		i++;
	}
	else
		return (_strlen_recursion(s + 1);
}
