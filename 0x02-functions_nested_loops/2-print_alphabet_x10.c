#include "main.h"

/**
 * main - entry point
 * Write a function that prints 10 times the alphabet, in lowercase,
 * followed by a new line
 *Prototype: void print_alphabet_x10(void)
 *Return: 0 (Success)
 */

int main(void)
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
