#include "main.h"

/**
 * _strlen_recursion - Returns the length of a given string
 * @s: The given string
 *
 * Return: Length of the string
 * Description - :)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
