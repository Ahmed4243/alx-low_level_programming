#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	if (argc != 3)
		printf("Error\n");
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		sum = x * y;
		printf("%d\n", sum);
	}
	return (0);
}