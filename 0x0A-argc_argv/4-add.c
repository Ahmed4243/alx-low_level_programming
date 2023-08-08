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
	int sum = 0, count;

	if (argc > 0)
	{
		for (count = 1; count < argc; count++)
		{
			if (isdigit(*argv[count]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[count]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}

