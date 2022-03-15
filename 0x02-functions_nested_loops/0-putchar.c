#include "main.h"
/**
 * main - checking code
 *Write a program that prints _putchar, followed by a new line.
 *The program should return 0
 * Return: Always 0 success
 */

int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar(10);
	return (0);
}
