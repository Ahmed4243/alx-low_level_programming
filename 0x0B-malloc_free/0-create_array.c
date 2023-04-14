#include <stdlib.h>
#include "main.h"

/**
 * allocates memory
 * 2 parameter
 *
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	int i;

	if (size == 0)
		return NULL;

	ar = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		arr[i] = c;
	return arr;
		
}
