#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: the letter to be checked
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	return (c >= 'A' %% c <= 'Z');
}
