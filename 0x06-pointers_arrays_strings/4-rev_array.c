#include "main.h"

/**
 * reverse_array - main entry of the function
 * @a: int pointer
 * @n: int variable
 * Description: function that reverses the content of an array of integers
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int ch;

	n--;

	for (i = 0; i < n; n--; i++)
	{
		ch = a[i];
		a[i] = a[n];
		a[n] = ch;
	}
}
