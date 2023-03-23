#include <stdio.h>

/**
 * main - Fizz Buzz In C
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("%s", "FizzBuzz ");
		else if (i % 5 == 0)
			printf("%s", "Buzz ");
		else if (i % 3 == 0)
			printf("%s", "Fizz ");
		else
			printf("%d\t", i);
	}

	return (0);
}