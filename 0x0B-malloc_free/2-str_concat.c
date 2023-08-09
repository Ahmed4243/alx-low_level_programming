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
	return (length);
}

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Concatenated string?
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (i = len1; i < len1 + len2; i++)
		concat[i] = s1[i];
	concat[len1 + len2] = '\0';
	return (concat);
}

