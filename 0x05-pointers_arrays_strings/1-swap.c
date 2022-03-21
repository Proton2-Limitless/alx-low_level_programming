#include "main.h"

/**
 * swap_int - function for swaping two int a,b using pointers
 * @a: int *a
 * @b: int *b
 * Return nothing
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
