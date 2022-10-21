#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase
 * Return: x10 a-z
 */

void print_alphabet_x10(void)
{
	int ch, co;

	for (co = 0; co <= 9; co++)

	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{

			_putchar(ch);
		}
		_putchar('\n');
	}
}
