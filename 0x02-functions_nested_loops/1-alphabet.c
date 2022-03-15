#include "main.h"

/**
 * main - entry point
 * Write a function that prints the alphabet, in lowercase
 * Return: 0 (success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar(10);
	return (0);
}
