#include "main.h"

/**
 * get_endianness - checks the endiannes
 * Return: 1 if little endian and 0 if big endian
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char*)&n);
}
