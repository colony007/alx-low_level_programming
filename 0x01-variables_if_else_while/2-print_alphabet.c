#include <stdio.h>

/**
 * main - entry point
 * description: prints alpha in lower case
 * Return: success
 */
int main(void)
{

	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}

