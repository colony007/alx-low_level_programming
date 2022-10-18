#include <stdio.h>
/**
 * main- Entry point of the program
 * description: Program prints all single digit
 * numbers of base 10 starting from 0
 * Return: success (0)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	putchar('\n');
	return (0);
}
