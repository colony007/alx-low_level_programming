#include "main.h"
#include <string.h>
/**
 * _strncpy - for copying purpose
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (1 = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
