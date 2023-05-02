#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: the string's pointer
 */

void print_rev(char *s)
{
	char rev[];

	while (*s != '\0')
	{
		rev = *s;
		*s++;
	}
	while (*rev != '\0')
	{
		_putchar(*rev);
		*rev++;
	}
	_putchar('\n');
}
