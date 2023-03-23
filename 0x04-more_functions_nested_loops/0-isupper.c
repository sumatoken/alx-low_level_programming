#include "main.h"

/**
 * _isupper - takes a characters and checks if it's upper case
 * @c: character to be checked
 * Return: 1 if @c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
