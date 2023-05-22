#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Function that prints number
 * down or up to 98
 * @n: Parameter that carries the initial number
 * Return: Void
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
			else
				printf("\n");
		}
	}

	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
			else
				printf("\n");
		}
	}
}
