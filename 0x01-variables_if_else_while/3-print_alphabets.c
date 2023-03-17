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

	for (c, a; c <= 'z'; c++, a++)
	{
		putchar(c);
		putchar(a);
	}
	putchar('\n');
	return (0);
}
