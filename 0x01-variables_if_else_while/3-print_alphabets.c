#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * description: prints alpha in lower and upper case
 * Return: success
 */
	int main(void)
{
	int ch1;
	int ch2;

	for (ch1 = 'a'; ch1 <= 'z'; ch1++)
	putchar(ch1);

{
	for (ch2 = 'A'; ch2 <= 'Z'; ch2++)
	putchar(ch2);
}
	
	putchar('\n');
	
	return (0);

}

