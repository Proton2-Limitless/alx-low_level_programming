#include "main.h"

/**
 * _puts - function for printing strings
 * @str: string to be printed
 */

void _puts(char *str)
{
	int i;

	i = 0;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
