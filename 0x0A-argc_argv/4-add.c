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
	int sum = 0, i, j;

	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < argv[i][j]; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}

