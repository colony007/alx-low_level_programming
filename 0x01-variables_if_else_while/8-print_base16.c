#include <stdio.h>
/**
 * main - Entry point of the program
 * description: prints the numbers in base 16
 * Return: success (0)
 */
int main(void)
{

	int ch;
	char la;

	for (ch = 0; ch < 10; ch++)
		putchar((ch % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n');

	return (0);















}

