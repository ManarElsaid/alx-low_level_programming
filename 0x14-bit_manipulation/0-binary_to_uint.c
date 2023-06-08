#include "main.h"

/**
 * binary_to_uint - convert the binary number to unsigned integer
 * @b: pointer to char of 0 and 1
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int int_num = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		int_num = int_num * 2 + (*b++ - '0');
	}
		return (int_num);
}
