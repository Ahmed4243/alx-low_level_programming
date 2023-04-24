#include "main.h"

/**
 * *_strchr - finds a character in an array
 * @s: the string it receives
 * @c: the character its looking for
 * Description: bla bla
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == c)
			return (&s[n]);
		else if (s[n] == '\0')
			return (0);
	}

	return (0);
}
