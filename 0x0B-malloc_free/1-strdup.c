#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Returns a string's length
 * @str: The given string
 *
 * Return: length
 */

int _strlen(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		{

		}
	return (length + 1);
}

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: String getting copied
 *
 * Return: *str
 */

char *_strdup(char *str)
{
	char *dup;
	int size;
	int i;

	if (str == NULL)
		return (NULL);
	size = _strlen(str);
	dup = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		if (dup == NULL)
			return (NULL);
		dup[i] = str[i];
	}
	return (dup);
}

