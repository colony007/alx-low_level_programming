#include <stdio.h>
/**
 * main - Entry point of the program
 * description:prints all combination of single digits
 * Return: success (0)
 */
int main(void)
{

	int n;

	for (n = '0'; n < '10'; n++)
	{
		putchar(n);
		if (n != 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
