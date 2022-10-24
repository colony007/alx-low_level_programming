#include "main.h"

/**
 * print_lines - prints a straight  line using '_'
 * @n: the number of '_' to be printed
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
