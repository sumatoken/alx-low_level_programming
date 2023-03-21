#include "main.h"

/**
 * print_sign - Check description
 * @n: number to be checked
 * Description: Checks the sign of a number.
 * Return: 0 if number is 0 and 1 if number is positive and -1 if negative
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}
