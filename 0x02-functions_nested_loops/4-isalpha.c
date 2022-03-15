#include "main.h"

/**
 * _isalpha - for checking lowercase letters;
 * @c: value to be checked
 * Return: 1 if its uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
