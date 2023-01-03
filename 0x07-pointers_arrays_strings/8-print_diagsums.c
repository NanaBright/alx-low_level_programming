#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of the two diagonals
 * @a: array to use
 * @size: size of diagonal
 */
void print_diagsums(int *a, int size)
{
	int i, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[(size * i) + i];
		diag2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", diag1, diag2);
}
