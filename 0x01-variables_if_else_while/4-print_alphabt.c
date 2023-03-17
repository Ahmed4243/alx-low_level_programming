#include <stdio.h>

/**
 * main - Prints 
 * no parameter
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		else
			putchar(c);
	}

	putchar('\n');

	return (0);
}
