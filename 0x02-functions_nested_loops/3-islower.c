#include "main.h"

/**
 * _islower - Check Char
 * @c: An input character
 * Description: function checks if @c is lower case or not
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(int c)
{
	char i;
	int isLower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			isLower = 1;
	}
	return (isLower);
}
