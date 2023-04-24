#include "main.h"

/**
 * *_strpbrk - returns a pointer to the first occurance
 * @s: the string
 * @accept: the substring
 * Description: bla bla
 * Return: pointer or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int x;
	unsigned int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
				return (&s[x]);
		}
	}
	return (NULL);
}
