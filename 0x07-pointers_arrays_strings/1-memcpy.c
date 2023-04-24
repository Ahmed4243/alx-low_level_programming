#include "main.h"

/**
 * *_memcpy - copies src into dest
 * @dest: destination
 * @src: source
 * @n: unsigned int
 * Description: copies elements from the src array into the dest array
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		src[i] = dest[i];

	return (dest);
}
