#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point of the program
 * @size: The size of the array
 * @c: The character that will initialize the array
 *
 * Return: s
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size ; i++)
		s[i] = c;
	s[size] = '\0';
	return (s);
}

