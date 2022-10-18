#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * description: prints all strings from 0 to 9
 * Return: success
 */
int main(void)

{
	int i;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	putchar('\n');
	return (0);
}
