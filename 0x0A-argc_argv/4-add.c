#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: command line arguments
 * @argv: contains program commands
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum, num, x, y, z;

	sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > '9' || argv[x][y] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (z = 1; z < argc; z++)
	{
		num = _atoi(argv[z]);
		if (num >= 0)
		{
			sum += num;
		}
	}

	print("%d\n", sum);
	return (0);
}i
