#include <stdio.h>

/**
 * main - prints arguments
 * @argc: number of arguments
 * @argv: contains command line arguments
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
