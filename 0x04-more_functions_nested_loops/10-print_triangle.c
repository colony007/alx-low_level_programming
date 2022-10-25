#include "main.h"

/**
 * print_triangle - prints triangle, followed by a new line.
 * @size: size of the triangle
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int a, b = 0;
	int space;

	if (size > 0)
	{
		while (b < size)
		{
			space = size - b - 1;
			while (a < size)
			{
				if (space > a)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				a++;
			}
			b++;
			a = 0
			_putchar ('\n');
		}

	}
	else
		_putchar('\n');
}
