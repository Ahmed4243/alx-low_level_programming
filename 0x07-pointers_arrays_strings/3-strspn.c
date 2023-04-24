#include "main.h"

/**
 * _strspn - returns the length of a string
 * @s: string
 * @accept: substring
 * Description: bla bla
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	unsigned int y;

	unsigned int count = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				count++;
				break;
			}
		}
	}

	return (count);
}
