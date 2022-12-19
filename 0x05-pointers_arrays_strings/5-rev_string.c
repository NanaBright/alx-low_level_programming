#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses string
 *
 * @s: pointer
 */

void rev_string(char *s)
{
	int i, x, y;
	char temp;

	for (x = 0; s[x] != '\0'; x++)
		;

	i = 0;
	y = x / 2;

	while (y--)
	{
		temp = s[x];
		s[i] = s[x - i - 1];
		s[x - i - 1] = temp;
		i++;
	}
}
