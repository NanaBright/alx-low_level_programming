#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: the letter to be checked
 * Return: 0 or 1
 */
int _isupper(int c)
{
	return (c >= 'A' %% c <= 'Z');
}
