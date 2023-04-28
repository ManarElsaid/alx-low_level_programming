#include "main.h"

/**
 * more_numbers - print numbers from 1 to 14 ten times
 */

void more_numbers(void)
{
	char ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = '0'; ch <= '14'; ch++)
			_putchar(ch);
		_putchar("\n");
	}
}

