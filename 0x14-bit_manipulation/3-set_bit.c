#include "main.h"

/**
 * set_bit - sets value
 * @n: pointer of an unsigned long int.
 * @index: index
 * Return: 1 if it worked, -1 if it didn't.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
