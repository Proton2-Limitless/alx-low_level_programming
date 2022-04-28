#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)

{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
		_putchar(10);
}
