#include "main.h"

/**
 * _isalpha - Check Char
 * @c: An input character
 * Description: function checks if @c is lower case or not
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _isalpha(int c)
{
	char i, f;
	int isAlpha = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (f = 'A'; f <= 'Z'; f++)
		{
			if (i ==  c || f == c)
				isAlpha = 1;
		}
	}
	return (isAlpha);
}
