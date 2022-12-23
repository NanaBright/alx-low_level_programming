#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @sr: source
 * @n: number of times to copy
 * Return: results
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = sr[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
