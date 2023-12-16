#include "search_algos.h"

size_t min(size_t x, size_t y);
int binary_search_help(int *array, size_t l, size_t h, int value);

/**
 * min - returns the min between 2 values
 * @x: the first element
 * @y: the second one
 * Return: the minimum element
 */
size_t min(size_t x, size_t y)
{
	if (x <= y)
		return (x);
	else
		return (y);
}

/**
 * binary_search_help - binary search with low and high
 * @array: a pointer to the first element of array
 * @l: the first element of the array
 * @h: the last element
 * @value: the value we search for
 * Return: the first index or -1
 */
int binary_search_help(int *array, size_t l, size_t h, int value)
{
	size_t mid, i;

	if (array == NULL)
	{
		return (-1);
	}

	if (array[0] == 0)
		return (0);
	while (h > l)
	{
		mid = (l + h) / 2;
		printf("Searching in array: ");
		for (i = l; i <= h; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[h]);

		if (array[mid] == value)
			return ((int)mid);
		if (array[mid] > value)
			h = mid - 1;
		if (array[mid] < value)
			l = mid + 1;
	}
	return (-1);
}

/**
 * exponential_search - a function that searches for a value in a
 * sorted array of integers using the exponential search algorithm
 * @array:  a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t l, h, step;

	if (array == NULL || size == 0)
		return (-1);

	step = 1;
	while (step < size && array[step] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		step = step * 2;
	}

	l = step / 2;
	h = min(step, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", l, h);
	return (binary_search_help(array, l, h, value));
}
