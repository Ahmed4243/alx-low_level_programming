#include "main.h"
void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recusion(*s + 1)
}
