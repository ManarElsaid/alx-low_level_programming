#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: pointer to separator between strings
 * @n:  number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;

	unsigned int i;

	va_start(ptr, n);

	for (i = 0; i < n - 1; i++)
	{
		if (va_arg(ptr, char) == NULL)
			printf("nil");
		else
		{
			printf("%s", va_arg(ptr, char));
			if (*separator != '\0')
				printf("%C", *separator);
		}
	}
	printf("%S\n", va_arg(ptr, char));
	va_end(ptr);
}
