#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */


int main(void)
{
	long long givenNumber = 612852475143;
	long long i = 2;
	long long largestFactor = 0;

	while (givenNumber > 1)
	{
		if (givenNumber % i)
		{
			givenNumber /= i;
			largestFactor = i;
		}
		else
			i++;
	}
	printf("%lli\n", largestFactor);
	return (0);
}
