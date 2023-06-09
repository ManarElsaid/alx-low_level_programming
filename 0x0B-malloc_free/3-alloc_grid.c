#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: return NULL in falire
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;



	arr = malloc(sizeof(*arr) * height);

	if (arr == NULL || width <= 0 || height <= 0)
		return (NULL);


	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(**arr));
		if (arr[i] == 0)
		{
			while (i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
