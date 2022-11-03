#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - entry point of function
 * descriptionL: sqrt using recursion
 * @n: parameter to be sqrt
 * Return: Square root of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - entry point of function
 * description: recursive square root
 * @n: number
 * @i: iterator
 * Return: a number
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
