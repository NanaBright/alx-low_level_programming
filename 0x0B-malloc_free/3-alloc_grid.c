#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array
 * @width: width of the array
 * @height: height of the array
 * Return: pointer of an array
 */

int **alloc_grid(int width, int height)
{
	int **arrout;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	arrout = malloc(height * sizeof(int *));
	if (arrout == NULL)
	{
		free(arrout);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arrout[i] = malloc(width * sizeof(int));
		if (arrout[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(arrout[i]);
			free(arrout);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arrout[i][j] = 0;

	return (arrout);
}
