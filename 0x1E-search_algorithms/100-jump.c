#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 * @array:  a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t step, i, prev;
	
	if (!array)
		return (-1);
	prev = 0;
	step = sqrt(size);
	while (array[step] < value && step < size)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
	}
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
	for (i = prev; i <= step; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
