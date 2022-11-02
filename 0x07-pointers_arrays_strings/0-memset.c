#include "main.h"

/**
 * _memset - entry point of the function
 * description: function that fills memory with a constant byte
 * @s: pointer to the memory
 * @b: constant to fill the memory
 * @n: byte of the memory
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
