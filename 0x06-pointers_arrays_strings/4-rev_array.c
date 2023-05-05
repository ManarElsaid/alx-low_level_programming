#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: the array
 * @n: number of elements in array
 */

reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = a[i];
	}
}
