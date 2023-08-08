#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	if (!argv || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (argv++; ; argv++)
			{
				if (!isdigit(*argv))
				{
					printf("Error\n");
					return (1);
				}
				sum += atoi(*argv);
			}
	}
	printf("Sum: %d\n", sum);
	return (0);
}