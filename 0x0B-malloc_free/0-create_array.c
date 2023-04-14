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
	if (size == 0)
		return NULL;

	char *ar;
	ar = malloc(size * sizeof(char));

	int i;
	for (i = 0; i < size; i++)
		arr[i] = c;
	return arr;
		
}
