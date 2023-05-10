#include "main.h"

/**
 * _puts_recursion - prints astring followed by a new line
 * @s: input of the function
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');

	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
