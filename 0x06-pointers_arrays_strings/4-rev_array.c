#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	n--;

	for (i = 0; i < n; n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}

