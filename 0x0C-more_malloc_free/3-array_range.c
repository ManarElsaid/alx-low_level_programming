#include "main.h"

/**
 * array_range - creats an array of integer
 * @min: first input
 * @max: seconed input
 * Return: returns a pointer
 */

int *array_range(int min, int max)
{
	int *arr;
	int len, i;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	arr = malloc(sizeof(int) * len);
	if (!arr)
		return (NULL);
	for (i = 0; i < len; i++)
		arr[i] = min++;
	return (arr);
}
