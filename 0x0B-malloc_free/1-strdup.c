#include "main.h"
#include <stdlib.h>

/**
 * _strdup - opies string given as a parameter
 * @str: string
 * Return: poitner of an array
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, j;

	i = 0;
	j = 0;

	if (str == NULL)
		return (NULL);
	while (str[j])
		j++;
	
	dup = malloc(sizeof(char) * (j + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
