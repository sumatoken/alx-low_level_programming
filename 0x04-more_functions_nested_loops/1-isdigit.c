#include "main.h"

/**
 *_isdigit - Check if a given number is a digit
 *@c: Digit to be checked
 *Return: 1 if @c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
