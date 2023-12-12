#include "search_algos.h"

/**
 * binary_search - a function that searches for a value
 * in an array of integers using the binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
    int low, high, mid, i;

    printf("Searching in array: \n");
    if (!array)
    {
        return (-1);
    }
    low = 0;
    high = size - 1;

    while (high >= low)
    {
        mid = low + (high - low) / 2;

        for (i = low; i < high; i++)
            printf("%d, ", array[i]);

        printf("%d\n", array[i]);

        if (array[mid] == value)
        {
            return (mid);
        }
        if (array[mid] > value)
        {
            high = mid - 1;
        }
        if (array[mid] < value)
        {
            low = mid + 1;
        }
    }
    return (-1);

}
