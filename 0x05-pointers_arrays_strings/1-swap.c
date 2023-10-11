#include <stdio.h>

/**
 * swap_int - Function that swaps the paremeters
 * @a: First parameter
 * @b: Second parameter
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *b;
	*b = *a;
	*a = i;
}
