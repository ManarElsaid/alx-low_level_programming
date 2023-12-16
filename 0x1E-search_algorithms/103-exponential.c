/*#include "search_algos.h"

size_t min(size_t x, size_t y);
int binary_search_help(int *array, size_t l, size_t h, int value);

**
 * min - returns the min between 2 values
 * @x: the first element
 * @y: the second one
 * Return: the minimum element
 *
size_t min(size_t x, size_t y)
{
	return ((x <= y) ? x : y);
}

**
 * binary_search_help - binary search with low and high
 * @array: a pointer to the first element of array
 * @l: the first element of the array
 * @h: the last element
 * @value: the value we search for
 * Return: the first index or -1
 *
int binary_search_help(int *array, size_t l, size_t h, int value)
{
	size_t mid, i;

	if (!array)
		return (-1);

	while (l <= h)
	{
		mid = (l + h) / 2;
		printf("Searching in array: ");
		for (i = l; i <= h; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[h]);

		if (array[mid] > value)
			h = mid - 1;
		if (array[mid] < value)
			l = mid + 1;
		else
			return (mid);
	}
	return (-1);
}

**
 * exponential_search - a function that searches for a value in a
 * sorted array of integers using the exponential search algorithm
 * @array:  a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1
*
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
}*/

#include "search_algos.h"

int binary_search_helper(int *array, int value,
			 size_t low, size_t high);
size_t min(size_t a, size_t b);

/**
 * min - returns the minimum of two size_t values
 * @a: first value
 * @b: second value
 *
 * Return: `a` if lower or equal to `b`, `b` otherwise
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * binary_search_helper - searches for a value in an integer array using a
 * binary search algorithm, not guaranteed to return lowest index if `value`
 * appears twice in `array` (modified from `binary_search`)
 * @array: pointer to first element of array to seach
 * @value: value to search for
 * @low: starting index
 * @high: ending index
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search_helper(int *array, int value,
			 size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%i%s", array[i], i == high ? "\n" : ", ");
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return ((int)mid);
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using an exponential search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = min(bound, size - 1);
	/* 'found' message generated even if array[high] < value */
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search_helper(array, value, low, high));
}

