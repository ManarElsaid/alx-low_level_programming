#include "main.h"

/**
 * flip_bits - the number of bits you would need to flip
 * @n: first num
 * @m: second num
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int count = 0;

	while (i)
	{

		if (i & 1ul)
			count++;
		i = i >> 1
	}	
	return (count);
}

