#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: size of argv
 * @argv: array of strings
 * Return: Always 0(Successs);
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n",argv[0]);
	}

	return (0);
}
