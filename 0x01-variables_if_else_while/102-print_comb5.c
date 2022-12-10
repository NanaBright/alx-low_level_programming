#include <stdio.h>

/**
 * main - start
 * Return: alwasy 0 success
 */
int main(void)
{
	int i = 48, j = 48, y = 48, x = 49;

	while (i < 58)
	{
		while (j < 58)
		{
			while (y < 58)
			{
				while (x < 58)
				{
					putchar(i);
					putchar(j);
					putchar(y);
					putchar(x);
					if (! (i == 57 && j == 56 && y == 57 && x ==57))
					{
						putchar(',');
						putchar(' ');
					}
					x++;
				}
				y++;
				x = 48;
			}
			j++;
			j = i;
			x = j + 1;
		}
		i++;
		j = 48;
		y = i;
		x = j+ 1;
	}
	putchar('\n');
	return (0);
}
