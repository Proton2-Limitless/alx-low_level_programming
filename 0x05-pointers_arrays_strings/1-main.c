#include "main.h"
#include <stdio.h>

/**
 * main - check function
 * Return: 0 always
 */

int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d b=%d\n",a,b);
	swap_int(&a,&b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
