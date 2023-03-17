#include <stdio.h>

/**
 * main - Entry point
 * no parameters
 *
 * Description: prints lowercases characters
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	char a = 'A';

	for (c; c <= 'z'; c++)
		putchar(c);
	for (a; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
