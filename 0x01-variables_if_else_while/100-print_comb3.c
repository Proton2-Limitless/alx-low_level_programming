#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int j;

	for (c = 0; c <= 9; c++)
	{
		for (j = c + 1; j <= 9; j++)
		{
			putchar(c + '0');
			putchar(j + '0');
			if (c < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
