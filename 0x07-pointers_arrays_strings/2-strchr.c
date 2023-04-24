#include "main.h"

/**
 * length - returns the length of a string
 * @s: the string it receieves
 * Description: bla bla
 * Return: length
 */

int length(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * *_strchr - finds a character in an array
 * @s: the string it receives
 * @c: the character its looking for
 * Description: bla bla
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	int len = length(s);
	int n;

	for (n = 0; n < len; n++)
	{
		if (s[n] == c)
			return (&s[n]);
	}

	return ('\0');
}
