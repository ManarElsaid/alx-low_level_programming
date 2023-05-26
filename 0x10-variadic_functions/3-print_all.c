#include "variadic_functions.h"
#include <stdarg.h>

/**
 * format_char - formats char
 * @separator: the string separator
 * @ptr: argument pointer
 */
void format_char(char *separator, va_list ptr)
{
	printf("%s%c", separator, va_arg(ptr, char));
}

/**
 * format_int - formats integer
 * @separator: the string separator
 * @ptr: argument pointer
 */
void format_int(char *separator, va_list ptr)
{
	printf("%s%d", separator, va_arg(ptr, int));
}

/**
 * format_float - formats float
 * @separator: the string separator
 * @ptr: argument pointer
 */
void format_float(char *separator, va_list ptr)
{
	printf("%s%f", separator, va_arg(ptr, double));
}

/**
 * format_string - formats string
 * @separator: the string separator
 * @ptr: argument pointer
 */
void format_char(char *separator, va_list ptr)
{
	char *str = va_arg(ptr, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";

	printf("%s%s", separator, str);
}

/**
 * print_all - prints anything
 * @format: the format string
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ptr;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ptr, format);
	while (format && format[i])
	{
		j = 0;

		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ptr);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
