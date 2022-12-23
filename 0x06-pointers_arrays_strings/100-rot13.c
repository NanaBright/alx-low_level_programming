#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 *
 * Return: result
 */

char *rot13(char *s)
{
	int count = 0, i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alpha[i])
			{
				*(s = count) = rot13[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
