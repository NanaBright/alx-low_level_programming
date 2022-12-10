#include <stdio.h>

/**
 * main - prints alphabets
 *
 * Return: success
*/

int main(void)
{
	char x = 'a';
	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
