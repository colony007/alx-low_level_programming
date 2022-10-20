#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)

	{
		ld *= -1;
	}
	_putchar(ld + '0');

	return (ld);
}
