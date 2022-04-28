#include <stdio.h>
#include "main.h"

/**
 * main - entry point for returning default value
 * Return: 0 Always
 */

int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n",n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
