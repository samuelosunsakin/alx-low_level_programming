#include <stdio.h>

/**
 * main - Program that prints the number of arguments
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success
 */

int main(int argc, __attribute__ ((unused)) char **argv)
{
	int i = 0;

	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	else
		printf("%d\n", i);

	return (0);
}
