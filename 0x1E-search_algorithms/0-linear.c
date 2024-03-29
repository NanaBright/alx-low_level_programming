#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
  * linear_search - linear search
  * @array: pointer to first element in search array
  * @size: size of array
 re found or -1
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
