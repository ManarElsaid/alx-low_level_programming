#include "function_pointers.h"

/**
 * array_iterator - executes a fun given as a par on each element of an arr
 * @array: an array
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
