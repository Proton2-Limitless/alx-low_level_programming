#include "main.h"

/**
 * print_alphabet_x10 - print 10x the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	char c;
	char i;

	i = 0;
	c = 'a';

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar(10);
		i++;
	}
}
