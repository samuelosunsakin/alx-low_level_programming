#include "main.h"

/**
 * _abs - Program that prints the absolute
 * value of a number
 * @n: Parameter that'll check
 * Return: Returns the absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n);
}
