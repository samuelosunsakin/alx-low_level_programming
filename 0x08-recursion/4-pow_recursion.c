#include "main.h"

/**
 * _pow_recursion - Funtion that that acts like the pow function
 * @x: Base parameter
 * @y: Degree parameter
 *
 * Return: integer answer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return(x * _pow_recursion(x, --y));
}
