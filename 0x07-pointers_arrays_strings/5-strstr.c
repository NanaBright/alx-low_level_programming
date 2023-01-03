#include "main.h"
#include <stdio.h>

/**
 * _strstr - searches for occurrence of the substring
 * @haystack: string to locate
 * @needle: substring to find
 * Return: return 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (0);
}
