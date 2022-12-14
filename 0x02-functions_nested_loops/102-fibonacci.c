#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int x = 0, b = 1, z;

	while (i < 50)
	{
		z = x + y;
		x = y;
		y = z;
		printd("i%lu", z);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
