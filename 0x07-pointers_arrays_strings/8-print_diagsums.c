#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - entry point of function
 * description: function that prints
 * sum of the two diagonals
 * of a square matrix of integers
 * @a: integer type pointer
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
