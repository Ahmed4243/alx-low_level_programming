#include "main.h"

/**
 * *_strchr - finds a character in an array
 * @s: the string it receives
 * @c: the character its looking for
 * Description: bla bla
 * Return: 0 or s
 */

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == c)
			return (&s[n]);
	}

	return (NULL);
}
