#include "main.h"

/**
 * _strspn - finds characters in string
 * @s: string to be scanned
 * @accept: contains character list
 * Return: returns unsigned values
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, x, y;

	x = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		y = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				x++;
				y = 1;
			}
		}
		if (y == 0)
		{
			return (x);
		}
	}

	return (0);
}
