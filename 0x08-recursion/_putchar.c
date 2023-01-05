#include <unistd.h>

/**
 * _putchar -  writes a charatcer ro c to stdout
 * @c: character to print
 * Return: On sucess 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
