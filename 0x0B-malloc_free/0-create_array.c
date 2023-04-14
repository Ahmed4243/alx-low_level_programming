#include <stdlib.h>
#include "main.h"

/**
 * allocates memory
 * 2 parameter
 *
 * Description: creates array and allocates memory
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));
	
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
		
}
