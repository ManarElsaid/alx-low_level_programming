#include "main.h"

/**
 * print_line - print line
 * @n: input of the function
 */

void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		if (n <= 0)
			break;
		_putchar('_');
	}
	_putchar("\n");
}
