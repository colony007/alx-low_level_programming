#include "main.h"

/**
 * print_line - printing lines
 * @n: number of times
 */
void print_line(int n)
{

	int i;

	for (n > 0)
	{
		for (i = 0; i < n; i++)
		_putchar('_');
	}

	_putchar('\n');
}
