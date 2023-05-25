#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by new line
 * @separator:  the string to be printed between numbers
 * @n: number of integers passed to function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	int i = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	while (i--)
	{
		printf("%d%s", va_arg(ptr, int),
				i ? (separator ? separator : "") : "\n");
				}
	va_end(ptr);

}
