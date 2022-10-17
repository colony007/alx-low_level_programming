#include <stdio.h>

/**
 * main - prints alpha in lower and upper case
 * Return: success
 */
int main(void)
{

	char bi;

	for (bi = 'a'; bi<= 'z'; bi++)
		putchar(bi);

	for (bi = 'A'; bi<= 'Z'; bi++)
		putchar(bi),
	
	putchar('\n');

	return (0);
}
