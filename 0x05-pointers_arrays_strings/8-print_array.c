#include "main.h"

/**
 * print_array - prints array of integers
 * @a: array of integers
 * @n: number of elements of array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i != n-1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	printf("\n");
}
