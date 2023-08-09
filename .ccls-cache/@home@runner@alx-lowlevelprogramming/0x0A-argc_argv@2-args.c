#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc == 1)
		printf("%s\n", *argv);
	else
	{
		for (count = 0; *argv; count++, argv++)
			printf("%s\n", *argv);
	}
	return (0);
}
