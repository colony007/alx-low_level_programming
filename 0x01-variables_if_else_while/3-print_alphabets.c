#include <stdio.h>

/**
 * main - entry point 
 * prints alpha in lower and upper case
 * Return: success
 */
int main(void)
{
	int x;
	int y;

	for (x = 'a', y = 'A';
	x <= 'z' && y <= 'Z'; x++, y++)

 	putchar(x);
	putchar(y);
		
	putchar('\n');

	return (0);
}
