#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * new lne follows
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_puthar(i + '0');
	}

	_putchar('\n');
}
