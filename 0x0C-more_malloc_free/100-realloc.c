#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc
 * @ptr: pointer to previous memory
 * @old_size: size in bytes for ptr
 * @new_size: size in new memory blocks for ptr
 * Return: pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_pt;

	if (new_size == old_size)
		return (pt);

	if (ptr == NULL)
	{
		new_pt = malloc(new_size);

		if (new_pt == NULL)
			return ('\0');

		return (new_pt);
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return ('\0');
	}

	new_pt = malloc(new_size);

	if (!new_pt)
		return ('\0');

	for (i = 0; i < old_size; i++)
		*((char *)new_pt + i) = *((char *)ptr + i);

	free(ptr);
	return ((void *)new_pt);
}
