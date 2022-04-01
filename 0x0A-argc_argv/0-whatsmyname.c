#include "main.h"
#include <stdio.h>

/**
 * main - contains the argv parameter
 * @argc: size of argv
 * @argv: array of strings
 * Return: Always 0;
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n",argv[0]);
	}

	return (0);
}
