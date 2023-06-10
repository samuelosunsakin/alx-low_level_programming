#include <stdio.h>

/**
 * main - Program that prints all its arguments
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
