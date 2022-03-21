#include "main.h"

/**
 * _strlen - convert strings to length
 * @s:parameter to be converted
 * Return: length of a given string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	/**
	 * for (i = 0;s[i] != '\0'; i++)
	 * {
	 *	n =  i;
	 *}
	 */

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
