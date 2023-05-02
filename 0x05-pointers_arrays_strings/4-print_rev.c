#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: the dtring's pointer
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; *s != '\0'; *s++)
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
