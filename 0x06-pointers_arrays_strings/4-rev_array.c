#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: the array
 * @n: number of elements in array
 * Return: returns reversed array
 */

reverse_array(int *a, int n)
{
	int i;
	int reva[];

	for (i = 0; i < n; i++)
	{
		reva[i] = a[(n - 1) - i];
	}
	return (reva);
}
