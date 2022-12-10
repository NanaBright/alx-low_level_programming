#include <stdio.h>

/**
* main - assigns random number
*
* Return: Always 0(sucess)
*/
int main(void)
{
	int x;
	
	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');
	return(0);
}
