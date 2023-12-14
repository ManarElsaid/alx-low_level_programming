#include "search_algos.h"

int binary_search_help(int *array, size_t l, size_t h, int value);

/**
 * binary_search_help - binary search with low and high
 * @array: a pointer to the first element of array
 * @l: the first element of the array
 * @h: the last element
 * Return: the first index or -1
 */
int binary_search_help(int *array, size_t l, size_t h, int value)
{
	size_t mid, i;

	if (!array)
    {
        return (-1);
    }


    while (h >= l)
    {
        mid = l + (h - l) / 2;
	printf("Searching in array: ");
        for (i = l; i < h; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[h]);
		
        if (array[mid] == value)
        {
            return ((int)mid);
        }
        if (array[mid] > value)
        {
            h = mid - 1;
        }
        if (array[mid] < value)
        {
            l = mid + 1;
        }
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

	if (!array || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);
	step = 1;
	while (array[step] < value && step < size)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		step = step * 2;
	}

	l = step / 2;
	if (step < (size - 1))
		h = step;
	else
		h = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", l, h);
	binary_search_help(array, l, h, value);

	return (-1);
}
