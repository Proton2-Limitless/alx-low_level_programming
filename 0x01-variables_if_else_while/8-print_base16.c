#include <stdio.h>

/**
 * main - Entry points
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char l;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
