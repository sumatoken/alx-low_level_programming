#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: It prints the alphabet 10 times in lowercase
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		i++;
	}
	_putchar('\n');
}
