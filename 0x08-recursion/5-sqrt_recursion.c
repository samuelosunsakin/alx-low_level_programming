#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - Function that finds the natural root of a number
 * @n: Number to find square root
 *
 * Return: Square root of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion
 * @n: integer paramter
 * @i: integer parameter
 *
 * Return: sqrt
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (_sqrt(n, i + 1));
}
