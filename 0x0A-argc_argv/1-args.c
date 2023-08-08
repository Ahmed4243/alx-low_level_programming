#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of command line arguments
 * @argv: Command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (count = 0; *argv; count++)
			argv++;
		printf("%d\n", count - 1);	
	}
	return (0);
}
