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
	unsigned int i;


	va_start(ptr, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%i", va_arg(ptr, int));
		if (separator != NULL)
			printf("%c ", *separator);
	}
	 printf("%i", va_arg(ptr, int));
	 printf("\n");
	 va_end(ptr);
}
