#include "main.h"

/**
 * _islower - Program that checks if a character
 * is in lower case or not
 * @c: Parameter that checks
 * Return: Returns 1 and otherwise 0
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
