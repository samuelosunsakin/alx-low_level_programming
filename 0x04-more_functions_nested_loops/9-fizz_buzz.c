#include <stdio.h>

/**
 * main - Program that prints numbers from 1 - 100
 * For multiples of 3, it prints Fizz
 * For multiples of 5, it prints Buzz
 * For multiples of 3 and 5, it prints FizzBuzz
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
