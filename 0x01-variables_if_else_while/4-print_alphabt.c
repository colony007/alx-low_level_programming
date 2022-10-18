#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * description: prints the alphabet in lowercase
 * followed by a new line, except q and e
 * Return: success
 */
int main(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{

		if (c != 'e' && la != 'q')
			putchar(c);

	}

	putchar('\n');

	return (0);

}
